/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:54:46 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/18 12:54:46 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    checker_flags(t_data *data)
{
    if (*data->buff == '-')
        data->sign = 1;
    else if (*data->buff == '0' && data->sign == 0)
        data->sign = 2;
    if (data->sign != 0)
        data->buff++;
}

void    checker_width(t_data *data, va_list ap)
{
    if (*data->buff == '*' && data->dot == 0)
    {
        if ((data->width = va_arg(ap, int)) < 0)
        {
            data->sign = 1;
            data->width *= (-1);
        }
        data->buff++;
    }
    else if ((*data->buff >= '0' && *data->buff <= '9') && data->dot == 0)
    {
        data->width = ft_atoi(data->buff);
        while (*data->buff >= '0' && *data->buff <= '9')
            data->buff++;
    }
}

void    checker_precision(t_data *data, va_list ap)
{
    if (*data->buff == '.')
    {
        data->dot = 1;
        data->buff++;
    }
    if (*data->buff == '*')
    {
        if ((data->precision = va_arg(ap, int)) < 0)
            data->precision = 0;
        data->buff++;
    }
    else if (*data->buff >= '0' && *data->buff <= '9')
    {
        data->precision = ft_atoi(data->buff);
        while (*data->buff >= '0' && *data->buff <= '9')
            data->buff++;
    }
}

int		checker_printf(t_data *data, va_list ap)
{
    checker_flags(data);
    checker_width(data, ap);
    checker_precision(data, ap);
	return (0);
}
