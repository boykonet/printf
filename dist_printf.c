/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dist_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:24:52 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/19 22:24:52 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int          dist_s(t_data *data, int len_bo, int differ_num)
{
    differ_num = data->num_1 - data->num_2;
    if (differ_num > 0)
    {
        if (len_bo >= data->num_1 && data->s_check == 0)
        {
            if (data->dot == 1)
            {
                len_bo = data->num_2;
                data->s_arr = data->num_1;
            }
            else
                data->s_arr = len_bo;
        }
        else if (len_bo >= data->num_1 && data->s_check == 1)
        {
            data->s_arr = data->num_1;
            len_bo = data->num_2;
        }
        else
        {
            if (len_bo < data->num_1 && data->s_check == 1)
                len_bo = data->num_2;
            data->s_arr = data->num_1;
        }
    }
    else
    {
        if (len_bo >= data->num_2)
            len_bo = data->num_2;
        data->s_arr = data->num_2;
    }
    return (len_bo);
}

static int      dist_percent(t_data *data, int len_bo, int differ_num)
{
    differ_num = data->num_1 - data->num_2;
    if (differ_num > 0)
    {
        if (data->num_1 < len_bo)
            data->s_arr = len_bo;
        else
            data->s_arr = data->num_1;
        data->num_2 = len_bo;
    }
    else
    {
        if (data->num_1 < len_bo)
            data->s_arr = len_bo;
        else
            data->s_arr = data->num_1;
        data->num_2 = len_bo;
    }
    return (len_bo);
}

static int      num_negative(t_data *data, int len_bo, int differ_num)
{
    if (data->num_1_n == -1 || data->num_2_n == -1)
    {
        if (data->num_1_n == -1 && data->num_2_n == 1)
            data->sign = 1;
        else if (data->num_1_n == 1 && data->num_2_n == -1)
        {
            if (data->n_num == -1)
                len_bo--;
            data->num_2 = len_bo;
            data->sign = 0;
        }
        else if (data->num_1_n == -1 && data->num_2_n == -1)
        {
            if (differ_num > 0)
                data->num_2 = len_bo;
            else
                data->s_arr = len_bo;
            data->sign = 1;
        }
    }
    return (len_bo);
}

static int          dist_numbers(t_data *data, char *bo, int len_bo, int differ_num)
{
    if (*bo == '-')
        data->n_num = -1;
    if (differ_num > 0)
    {
        if (data->num_1 < len_bo)
            data->s_arr = len_bo;
        else
            data->s_arr = data->num_1;
        if (data->n_num == -1 && data->num_2 < len_bo)
            data->num_2 = len_bo;
    }
    else
    {
        if (len_bo > data->num_2)
            data->s_arr = len_bo;
        else
            data->s_arr = data->num_2;
//        if (data->n_num == -1)
//            data->s_arr++;
    }
    len_bo = num_negative(data, len_bo, differ_num);
    return (len_bo);
}

int		dist_printf(t_data *data)
{
	char	*bo;
	int		len_bo;
	int		differ_num;

	bo = data->var;
    len_bo = ft_strlen(bo);
	differ_num = data->num_1 - data->num_2;
	if ((ft_strchr("piduxX", *data->buff)))
	    len_bo = dist_numbers(data, bo, len_bo, differ_num);
	else if ((ft_strchr("s", *data->buff)))
	    len_bo = dist_s(data, len_bo, differ_num);
	else if ((ft_strchr("c%", *data->buff)))
	    len_bo = dist_percent(data, len_bo, differ_num);
    if ((data->var = alloc_array(data, bo)) == NULL)
        return (-1);
    fill_array(data, bo, len_bo, differ_num);
	return (0);
}
