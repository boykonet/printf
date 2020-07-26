/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapi_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.r       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:32:32 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/19 23:32:32 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		mapi_printf(t_data *data, va_list ap, char const c, int (*func)(t_data*, va_list))
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
		if ((func(data, ap)) == -1)
			return (-1);
	}
	return (0);
}
