
#include "libftprintf.h"

static int		get_data_d_and_i(t_data *data, va_list ap)
{
	int			num;

	num = (int)va_arg(ap, int);
	if ((data->var = ft_itoa(num)) == NULL)
		return (-1);
	return (0);
}

int				printf_d_and_i(t_data *data, va_list ap, char *s)
{
    if ((printf_spec(data, ap, *s, &get_data_d_and_i)) == -1)
        return (-1);
    return (0);
}
