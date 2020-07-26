/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:42:38 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/19 23:42:38 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		i_without_flags(t_data *data, va_list ap)
{
	int			num;

	num = (int)va_arg(ap, int);
	if ((data->var = ft_itoa(num)) == NULL)
		return (-1);
	return (0);
}

int				printf_i(t_data *data, va_list ap, char *s)
{
    if (*s == *data->buff)
    {
        if ((mapi_printf(data, ap, *s, &i_without_flags)) == -1)
            return (-1);
        return (0);
    }
	if ((mapi_printf(data, ap, *s, &i_without_flags)) == -1)
		return (-1);
	dist_printf(data);
	return (0);
}
