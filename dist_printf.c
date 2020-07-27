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

int		dist_printf(t_data *data)
{
	char	*str;
	int		len_str;
	int		differ_num;

	str = data->var;
    len_str = ft_strlen(str);
	differ_num = data->width - data->precision;
    if (*data->buff == 's')
    {
        if (data->dot == 0)
            data->precision = len_str;
        else
        {
            if (len_str > data->precision)
                len_str = data->precision;
        }
    }
	if ((ft_strchr("piduxX", *data->buff)) && *str == '-')
    {
        data->n_num = -1;
        len_str--;
    }
	if (differ_num > 0)
    {
	    data->s_arr = data->width;
        if (data->n_num == 1)
        {
            if (len_str > data->width)
                data->s_arr = len_str;
        }
        else
        {
            if (len_str >= data->width)
                data->s_arr = len_str + 1;
        }
    }
	else
    {
	    data->s_arr = data->precision;
	    if (data->n_num == -1)
	        data->s_arr++;
    }
    if ((data->var = alloc_array(data, str)) == NULL)
        return (-1);
    fill_array(data, str, len_str, differ_num);
	return (0);
}
