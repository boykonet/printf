/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:04:52 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/16 22:04:52 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// problem with int min
int					u_without_flags(t_data *data, va_list ap)
{
    va_list         aq;
    unsigned int    u;
    unsigned int    var;

    va_copy(aq, ap);
    if ((var = (unsigned int)va_arg(aq, int)) < 0)
    {
        u = UNS_INT_MAX + var + 1;
        if ((data->var = ft_itoa_base(u, 10)) == NULL)
			return (-1);
		ap = aq;
    }
    else
    {
        u = (unsigned int)va_arg(ap, int);
        if ((data->var = ft_itoa_base(u, 10)) == NULL)
			return (-1);
    }
	return (0);
}

int				printf_u(t_data *data, va_list ap, char *s)
{
    if (*s == *data->buff)
    {
        if ((mapi_printf(data, ap, *s, &u_without_flags)) == -1)
            return (-1);
        return (0);
    }
	if ((mapi_printf(data, ap, *s, &u_without_flags)) == -1)
		return (-1);
	dist_printf(data);
	return (0);
}
