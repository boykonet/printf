
#include "libftprintf.h"

static int		d_and_i_without_flags(t_data *data, va_list ap)
{
	int			num;

	num = (int)va_arg(ap, int);
	if ((data->var = ft_itoa(num)) == NULL)
		return (-1);
	return (0);
}

int				printf_d_and_i(t_data *data, va_list ap, char *s)
{
    if (*s == *data->buff)
    {
        if ((mapi_printf(data, ap, *s, &d_and_i_without_flags)) == -1)
            return (-1);
        return (0);
    }
	if ((mapi_printf(data, ap, *s, &d_and_i_without_flags)) == -1)
		return (-1);
	dist_printf(data);
	return (0);
}
