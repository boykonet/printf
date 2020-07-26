/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 17:00:50 by gkarina           #+#    #+#             */
/*   Updated: 2020/06/16 17:00:50 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		printf_specifiers(t_data *data, va_list ap, char *s)
{
    *data = (t_data) { data->buff, data->var, 0, 0, data->size, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0};
	if (*s == 'c')
		data->err = printf_c(data, ap, s);
	else if (*s == 's')
		data->err = printf_s(data, ap, s);
	else if (*s == 'p')
		data->err = printf_p(data, ap, s);
    else if (*s == 'd' || *s == 'i')
        data->err = printf_d_and_i(data, ap, s);
    else if (*s == 'u')
        data->err = printf_u(data, ap, s);
    else if (*s == 'x' || *s == 'X')
        data->err = printf_x_and_x_big(data, ap, s);
    else if (*s == '%')
        data->err = printf_percent(data, ap, s);
	if (data->err == -1)
		return (-1);
	return (0);
}

static int		printf_flags_specifiers(t_data *data, va_list ap, char *s)
{
	if ((printf_specifiers(data, ap, s)) == -1)
		return (-1);
	data->count = ft_strlen(data->var);
	write_printf(data->var, data->count);
	data->size += data->count;
	free(data->var);
	data->var = NULL;
	return (0);
}

static char         *check_percent(t_data *data, va_list ap, char *b)
{
    data->buff = ++b;
    while (*b != '\0')
    {
        if ((ft_strchr("cspdiuxX%", *b)) != NULL)
            break ;
        b++;
    }
    if ((ft_strchr("cspdiuxX%", *b)) != NULL)
    {
        if ((printf_flags_specifiers(data, ap, b)) == -1)
        {
            free(data);
            va_end(ap);
            return (NULL);
        }
        data->buff = ++b;
    }
    return (b);
}

static char         *print_alphabet(t_data *data, char *b)
{
    data->count = 0;
    data->buff = b;
    while (*b != '%' && *b != '\0')
    {
        data->count++;
        b++;
    }
    data->size += data->count;
    write_printf(data->buff, data->count);
    return (b);
}

int				ft_printf(const char *fmt, ...)
{
    va_list     ap;
	t_data		*data;
	char		*b;
	int			size;

    va_start(ap, fmt);
	b = (char*)fmt;
	if ((data = (t_data*)malloc(sizeof(t_data))) == NULL)
	{
		va_end(ap);
		return (-1);
	}
	*data = (t_data) { NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 };
	while (*b)
    {
        if (*b == '%')
            b = check_percent(data, ap, b);
		else
            b = print_alphabet(data, b);
	}
	size = data->size;
	free(data);
	va_end(ap);
	return (size);
}
