/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.r       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:00:08 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/16 22:00:08 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				s_without_flags(t_data *data, va_list ap)
{
    char    *str;

	str = (char*)va_arg(ap, char*);
	if (str == NULL)
    {
        if ((data->var = ft_strdup("(null)")) == NULL)
            return (-1);
    }
	else
    {
        if ((data->var = ft_strdup(str)) == NULL)
            return (-1);
    }
	return (0);
}

int				printf_s(t_data *data, va_list ap, char *s)
{
    if (*s == *data->buff)
    {
        if ((mapi_printf(data, ap, *s, &s_without_flags)) == -1)
            return (-1);
        return (0);
    }
	if ((mapi_printf(data, ap, *s, &s_without_flags)) == -1)
		return (-1);
	dist_printf(data);
	return (0);
}
