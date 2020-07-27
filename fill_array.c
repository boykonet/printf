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
    differ_num = data->width - data->precision;
    if (differ_num > 0)
    {
        ft_memset(data->var, ' ', data->s_arr);
        data->var[data->s_arr] = '\0';
        if (data->sign == 0)
        {
            ft_memset(&data->var[differ_num], '0', data->precision);
            ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
        }
        else if (data->sign == 1)
        {
            if (data->precision < len_bo)
                data->precision = len_bo;
            if (data->n_num == -1 && (data->num_1_n == 1 && data->num_2_n == 1))
                data->precision++;
            ft_memset(data->var, '0', data->precision);
            ft_memcpy(&data->var[data->precision - len_bo], bo, len_bo);
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

static int      fill_i_d_u_x_x_big(t_data *data, char *str, int len_str, int diff_num)
{
    int     temp;

    if (diff_num > 0)
    {
        ft_memset(data->var, ' ', data->s_arr);
        data->var[data->s_arr] = '\0';
        if (data->sign == 2)
        {
            if (data->dot == 0)
            {
                ft_memset(data->var, '0', data->s_arr);
                if (data->n_num == 1)
                    ft_memcpy(&data->var[data->s_arr - len_str], str, len_str);
                else
                {
                    *data->var = '-';
                    ft_memcpy(&data->var[data->s_arr - len_str], &str[1], len_str);
                }
            }
            else
                data->sign = 0;
        }
        if (data->sign == 0)
        {
            if (data->n_num == 1)
            {
                ft_memset(&data->var[data->s_arr - data->precision], '0', data->precision);
                ft_memcpy(&data->var[data->s_arr - len_str], str, len_str);
            }
            else
            {
                temp = data->precision < len_str ? len_str : data->precision;
                ft_memset(&data->var[data->s_arr - temp], '0', temp);
                ft_memcpy(&data->var[data->s_arr - len_str], &str[1], len_str);
                if (temp > len_str)
                    data->var[diff_num - 1] = '-';
                else
                    data->var[data->s_arr - temp - 1] = '-';
            }
        }
        else if (data->sign == 1)
        {
            if (data->n_num == 1)
            {
                temp = data->precision < len_str ? len_str : data->precision;
                ft_memset(data->var, '0', temp);
                ft_memcpy(&data->var[temp - len_str], str, len_str);
            }
            else
            {
                temp = data->precision < len_str ? len_str : data->precision;
                *data->var = '-';
                ft_memset(&data->var[1], '0', temp);
                ft_memcpy(&data->var[temp - len_str + 1], &str[1], len_str);
            }
        }
    }
    else
    {
        ft_memset(data->var, '0', data->s_arr);
        data->var[data->s_arr] = '\0';
        if (data->n_num == 1)
            ft_memcpy(&data->var[data->s_arr - len_str], str, len_str);
        else
        {
            *data->var = '-';
            ft_memcpy(&data->var[data->s_arr - len_str], &str[1], len_str);
        }
    }
    return (0);
}

static int      fill_percent(t_data *data, char *bo, int len_bo, int differ_num)
{
    differ_num = data->width - data->precision;
    ft_memset(data->var, ' ', data->s_arr);
    data->var[data->s_arr] = '\0';
    if (data->sign == 0)
    {
        ft_memset(&data->var[differ_num], '0', data->precision);
        ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
    }
    if (data->sign == 1)
    {
        if (data->precision < len_bo)
            data->precision = len_bo;
        ft_memset(data->var, '0', data->precision);
        ft_memcpy(&data->var[data->precision - len_bo], bo, len_bo);
    }
    else if (data->sign == 2)
    {
        ft_memset(data->var, '0', data->s_arr);
        ft_memcpy(&data->var[data->s_arr - len_bo], bo, len_bo);
    }
    return (0);
}

char	*fill_array(t_data *data, char *str, int len_str, int diff_num)
{
//    if ((ft_strchr("iduxX", *data->buff)))
       fill_i_d_u_x_x_big(data, str, len_str, diff_num);
/*    else if ((ft_strchr("s", *data->buff)))
        fill_s(data, str, len_str, diff_num);
    else if ((ft_strchr("c%", *data->buff)))
        fill_percent(data, str, len_str, diff_num);*/
	return (0);
}
