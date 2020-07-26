/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 19:48:41 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/19 19:48:41 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int      fill_s(t_data *data, char *bo, int len_bo, int differ_num)
{
    differ_num = data->num_1 - data->num_2;
    if (differ_num > 0)
    {
        ft_memset(data->var, ' ', data->s_arr);
        data->var[data->s_arr] = '\0';
        if (data->sign == 0)
        {
            ft_memset(&data->var[differ_num], '0', data->num_2);
            ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
        }
        else if (data->sign == 1)
        {
            if (data->num_2 < len_bo)
                data->num_2 = len_bo;
            if (data->n_num == -1 && (data->num_1_n == 1 && data->num_2_n == 1))
                data->num_2++;
            ft_memset(data->var, '0', data->num_2);
            ft_memcpy(&data->var[data->num_2 - len_bo], bo, len_bo);
        }
        else if (data->sign == 2)
        {
            if (data->dot == 0)
                ft_memset(data->var, '0', data->s_arr);
            else
                ft_memset(data->var, ' ', data->s_arr);
            ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
        }
    }
    else
    {
        ft_memset(data->var, '0', data->s_arr);
        data->var[data->s_arr] = '\0';
        ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
    }
    return (0);
}

static int      fill_numbers(t_data *data, char *bo, int len_bo, int differ_num)
{
    differ_num = data->num_1 - data->num_2;
    if (differ_num > 0)
    {
        ft_memset(data->var, ' ', data->s_arr);
        data->var[data->s_arr] = '\0';
        if (data->sign == 0)
        {
            if (data->n_num == -1)
            {
                len_bo--;
                data->num_2--;
                ft_memset(&data->var[data->s_arr - data->num_2], '0', data->num_2);
                ft_memcpy(&data->var[data->s_arr - len_bo], &bo[1], len_bo);
            }
            else
            {
                ft_memset(&data->var[differ_num], '0', data->num_2);
                ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
            }
        }
        else if (data->sign == 1)
        {
            if (data->num_2 < len_bo)
                data->num_2 = len_bo;
            ft_memset(data->var, '0', data->num_2);
            ft_memcpy(&data->var[data->num_2 - len_bo], bo, len_bo);
        }
        else if (data->sign == 2)
        {
            if (data->dot == 0)
                ft_memset(data->var, '0', data->s_arr);
            else
                ft_memset(data->var, ' ', data->s_arr);
            if (data->n_num == -1)
                ft_memcpy(&data->var[data->s_arr - len_bo], &bo[1], len_bo);
            else
                ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
        }
        if (data->n_num == -1)
        {
            if (data->n_num == -1 && data->sign == 0)
                data->var[differ_num - 1] = '-';
            else if (data->n_num == -1 && data->sign == 1)
                *data->var = '-';
            else if (data->n_num == -1 && data->sign == 2)
                *data->var = '-';
        }
    }
    else
    {
        ft_memset(data->var, '0', data->s_arr);
        data->var[data->s_arr] = '\0';
        if (data->n_num == -1)
        {
            len_bo--;
            ft_memcpy(&data->var[data->s_arr - len_bo], &bo[1], len_bo);
        }
        else
            ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
        if (data->n_num == -1)
            *data->var = '-';
    }
    return (0);
}

static int      fill_percent(t_data *data, char *bo, int len_bo, int differ_num)
{
    differ_num = data->num_1 - data->num_2;
    ft_memset(data->var, ' ', data->s_arr);
    data->var[data->s_arr] = '\0';
    if (data->sign == 0)
    {
        ft_memset(&data->var[differ_num], '0', data->num_2);
        ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
    }
    if (data->sign == 1)
    {
        if (data->num_2 < len_bo)
            data->num_2 = len_bo;
        ft_memset(data->var, '0', data->num_2);
        ft_memcpy(&data->var[data->num_2 - len_bo], bo, len_bo);
    }
    else if (data->sign == 2)
    {
        ft_memset(data->var, '0', data->s_arr);
        ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
    }
    return (0);
}

char	*fill_array(t_data *data, char *bo, int len_bo, int differ_num)
{
    if ((ft_strchr("piduxX", *data->buff)))
        fill_numbers(data, bo, len_bo, differ_num);
    else if ((ft_strchr("s", *data->buff)))
        fill_s(data, bo, len_bo, differ_num);
    else if ((ft_strchr("c%", *data->buff)))
        fill_percent(data, bo, len_bo, differ_num);
	return (0);
}
