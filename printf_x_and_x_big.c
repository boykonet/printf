/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x_and_x_big.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:15:40 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/26 14:15:40 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int					get_data_x(t_data *data, va_list ap)
{
    long int        x;
    unsigned int    xx;

    x = (long int)va_arg(ap, int);
    if (x < 0)
        xx = UNS_INT_MAX + x + 1;
    else
        xx = x;
    if ((data->var = ft_itoa_base(xx, 16)) == NULL)
		return (-1);
    return (0);
}

int					get_data_x_big(t_data *data, va_list ap)
{
    long int        x;
    unsigned int    xx;
    int             i;

    i = 0;
    x = (long int)va_arg(ap, int);
    if (x < 0)
        xx = UNS_INT_MAX + x + 1;
    else
        xx = x;
    if ((data->var = ft_itoa_base(xx, 16)) == NULL)
        return (-1);
    while (data->var[i])
    {
        if (data->var[i] >= 'a' && data->var[i] <= 'x')
            data->var[i] = data->var[i] - 32;
        i++;
    }
    return (0);
}

int				printf_x_and_x_big(t_data *data, va_list ap, char *s)
{
    if (*s == 'x')
    {
        if ((printf_spec(data, ap, *s, &get_data_x)) == -1)
            return (-1);
    }
    else
    {
        if ((printf_spec(data, ap, *s, &get_data_x_big)) == -1)
            return (-1);
    }
    return (0);
}
