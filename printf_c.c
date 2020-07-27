/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 21:57:06 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/16 21:57:06 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int			get_data_c(t_data *data, va_list ap)
{
	unsigned char	c;

	c = (unsigned char)va_arg(ap, int);
	if ((data->var = (char*)malloc(sizeof(char) * 2)) == NULL)
		return (-1);
	data->var[0] = c;
	data->var[1] = '\0';
	return (0);
}

int					printf_c(t_data *data, va_list ap, char *s)
{
    if ((printf_spec(data, ap, *s, &get_data_c)) == -1)
        return (-1);
    return (0);
}
