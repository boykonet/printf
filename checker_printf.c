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

int		checker_printf(t_data *data, va_list ap, char ch)
{
    data->flag = 0;
	if (*data->buff == '-')
        data->sign = 1;
	else if (*data->buff == '0' && data->sign == 0)
        data->sign = 2;
	else if (*data->buff == '*' && data->dot == 0)
    {
        if ((data->num_1 = va_arg(ap, int)) < 0)
        {
            data->num_1 *= (-1);
            data->num_1_n = -1;
        }
    }
	else if ((*data->buff >= '0' && *data->buff <= '9') && data->dot == 0)
	{
	    data->flag = 1;
		data->num_1 = ft_atoi(data->buff);
		while (*data->buff >= '0' && *data->buff <= '9')
			data->buff++;
	}
	else if (*data->buff == '.')
        data->dot = 1;
	else if (*data->buff == '*' && data->dot == 1)
    {
	    if (ch == 's')
	        data->s_check = 1;
        if ((data->num_2 = va_arg(ap, int)) < 0)
        {
            data->num_2 *= (-1);
            data->num_2_n = -1;
        }
    }
	else if ((*data->buff >= '0' && *data->buff <= '9') && data->dot == 1)
	{
	    if (ch == 's')
	        data->s_check = 1;
	    data->flag = 1;
		data->num_2 = ft_atoi(data->buff);
		while (*data->buff >= '0' && *data->buff <= '9')
			data->buff++;
	}
	return (0);
}
