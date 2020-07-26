/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 22:00:38 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/25 22:00:38 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int			percent_without_flags(t_data *data)
{
	unsigned char	c;

	c = '%';
	if ((data->var = (char*)malloc(sizeof(char) * 2)) == NULL)
		return (-1);
	data->var[0] = c;
	data->var[1] = '\0';
	return (0);
}

int		mapi_percent(t_data *data, va_list ap, char const c, int (*func)(t_data*))
{
    if (!func || !c)
        return (-1);
    while (*data->buff != c)
    {
        checker_printf(data, ap, c);
        if (data->flag == 0)
            data->buff++;
    }
    if (*data->buff == c)
    {
        if ((func(data)) == -1)
            return (-1);
    }
    return (0);
}

int					printf_percent(t_data *data, va_list ap, char *s)
{
    if (*s == *data->buff)
    {
        if ((mapi_percent(data, ap, *s, &percent_without_flags)) == -1)
            return (-1);
        return (0);
    }
    if ((mapi_percent(data, ap, *s, &percent_without_flags)) == -1)
        return (-1);
    dist_printf(data);
    return (0);
}
