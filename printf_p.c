/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.r       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:01:06 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/16 22:01:06 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				get_data_p(t_data *data, va_list ap)
{
	char        *p;
	char        *var;
    long int    num;
    long int    *i;

	var = "0x";
	num = (long int)va_arg(ap, size_t);
	i = (long int*)&num;
	if ((p = ft_itoa_base(*i, 16)) == NULL)
		return (-1);
    if ((data->var = ft_strjoin(var, p)) == NULL)
	{
		free(p);
		return (-1);
	}
	free(p);
	return (0);
}

int				printf_p(t_data *data, va_list ap, char *s)
{
    if ((printf_spec(data, ap, *s, &get_data_p)) == -1)
        return (-1);
    return (0);
}
