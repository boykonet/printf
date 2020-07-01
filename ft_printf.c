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

#define UNS_INT_MAX 4294967295
#include "libftprintf.h"
//cspdiuxX%

char    *ft_printf_all(const char *buff, va_list ap);

char	*ft_printf_c(va_list ap)
{
	unsigned char	c;
	char	        *cc;

	c = (unsigned char)va_arg(ap, int);
	cc = (char*)malloc(sizeof(char) * 2);
	cc[0] = c;
	cc[1] = '\0';
	return (cc);
}

char	*ft_printf_s(va_list ap)
{
	char	*s;

	s = (char*)va_arg(ap, char *);
	return (s);
}

void	*ft_printf_p(va_list ap)
{
	char        *p;
	char        *pp;
	char        *var;
    long int    num;
    long int    *i;

	var = "0x";
	num = (long int)va_arg(ap, size_t);
	i = (long int*)&num;
	p = ft_itoa_base(*i, 16);
    pp = ft_strjoin(var, p);
	free(p);
	return ((void*)pp);
}

char	*ft_printf_d_and_i(va_list ap)
{
	int		num;
	char	*d;

	num = (int)va_arg(ap, int);
	d = ft_itoa(num);
	return (d);
}

// problem with int min
char	*ft_printf_u(va_list ap)
{
    va_list         aq;
	char			*uu;
    unsigned int    u;
    unsigned int    var;

    va_copy(aq, ap);
    if ((var = (unsigned int)va_arg(aq, int)) < 0)
    {
        u = UNS_INT_MAX + var + 1;
        uu = ft_itoa_base(u, 10);
    }
    else
    {
        u = (unsigned int) va_arg(ap, int);
        uu = ft_itoa_base(u, 10);
    }
	return (uu);
}

char	*ft_printf_x(va_list ap)
{
    char            *xx;
    long long int   x;

    x = (long long int)va_arg(ap, int);
    xx = ft_itoa_base(x, 16);
    return (xx);
}

char    *ft_printf_x_big(va_list ap)
{
    char            *xx_big;
    long long int   x_big;
    int             i;

    i = 0;
    x_big = (long long int)va_arg(ap, int);
    xx_big = ft_itoa_base(x_big, 16);
    while (xx_big[i])
    {
        if (xx_big[i] >= 'a' && xx_big[i] <= 'x')
            xx_big[i] = xx_big[i] - 32;
        i++;
    }
    return (xx_big);
}

/*char    *ft_printf_number(const char *buff, va_list ap)
{
    char    *var;
    char    *res;
    int     num;
    int     len;
    int     i;

    i = 0;
    num = ft_atoi(buff);
    len = num;
    while (--len > 0)
        buff++;
    var = ft_printf_all(++buff, ap);
    len = ft_strlen(var);
    if (len > num)
        len = num;
    while (len > i)
    {
        res[i] = var[i];
        i++;
    }
    while (num > i)
        res[++i] = ' ';
    res[num] = '\0';
    return (res);
}

char    *ft_printf_star(const char *buff, va_list ap, char c)
{
    char    *var;
    char    *res;
    int     num;
    int     len;
    int     i;

    num = (int)va_arg(ap, int);
    var = ft_printf_all(buff, ap);
    len = ft_strlen(var);
    res = (char*)malloc(sizeof(char) * (num + 1));
    if (len > num)
    {
        while (num > i)
            res[i] = *var++;
    }
    else
    {
        len = (len - num) * (-1);
        while (len > i)
            res[i] = c;
        while (num > i)
            res[i] = *var++;
    }
    res[num] = '\0';
    return (res);
}

char    *ft_printf_flags(const char *buff, va_list ap)
{
    va_list aq;
    char    *res;
    char    *var;
    char    c;
    int     num;
    int     num1;
    int     num2;
    int     len;
    int     i;

    i = 0;
    if (*buff == '-')
    {
        buff++;
        if (*buff == '0')
        {
            buff++;
            if (*buff >= '0' && *buff <= '9')
                num1 = ft_atoi(buff);
            if (*buff == '.')
                num2 = ft_atoi(++buff);
        }
        else if (*buff >= '0' || *buff <= '9')
        {
            num = ft_printf_number();
        }
        else if (*buff == '*')
        {
            num = (int)va_arg(ap, int);
            res = (char*)malloc(sizeof(char) * (num + 1));
            var = ft_printf_all(++buff, ap);
            if (len > num)
                len = num;
            while (len > i)
            {
                res[i] = var[i];
                i++;
            }
            while (num > i)
                res[i++] = ' ';
            res[num] = '\0';
        }
        else if (*buff >= '0' && *buff <= '9')
            ft_printf_number();
        }

    }
    else if (*buff == '0')
    {
        res =
    }
    else if (*buff == '.')
    {
        res =
    }
    else if (*buff == '*')
    {
        ++buff;
        if (*buff == 'd' || *buff == 'i' || *buff == 's'
            || *buff == 'u' || *buff == 'x' || *buff == 'X')
            res = ft_printf_star(buff, ap, ' ');
    }
    return (res);
}*/

char	*ft_printf_all(const char *buff, va_list ap)
{
	char    *res;

	res = NULL;
	if (*buff == 'c')
		res = ft_printf_c(ap);
	else if (*buff == 's')
		res = ft_printf_s(ap);
	else if (*buff == 'p')
		res = ft_printf_p(ap);
    else if (*buff == 'd' || *buff == 'i')
        res = ft_printf_d_and_i(ap);
    else if (*buff == 'u')
        res = ft_printf_u(ap);
    else if (*buff == 'x')
        res = ft_printf_x(ap);
    else if (*buff == 'X')
        res = ft_printf_x_big(ap);
//	if (*buff == '-' || *buff == '0' || *buff == '.' || *buff == '*')
//	    res = ft_printf_flags(buff, ap);
	return (res);
}

size_t  ft_lstprintf(t_list **lst)
{
	t_list	*current;
	t_list	*prev;
	size_t  count;
	size_t  len;

	current = (*lst);
	count = 0;
	while (current != NULL)
	{
		prev = current;
		len = ft_strlen(prev->content);
		write(1, prev->content, len);
		count = count + len;
		current = current->next;
	}
	return (count);
}

int		ft_printf(const char *fmt, ...)
{
    va_list     ap;
    const char  *buff;
    t_list      *new;
    t_list      *head;
    int         i;
    int         j;

    new = NULL;
    head = NULL;
    va_start(ap, fmt);
    i = 0;
    buff = ft_strdup(fmt);
    head = new;
	while (buff[i])
    {
        if (buff[i] == '%')
        {
            if ((new = ft_lstnew(ft_printf_all(&buff[++i], ap))) == NULL)
            {
                ft_lstclear(&head, ft_free);
                return (-1);
            }
            ft_lstadd_back(&head, new);
            i++;
        }
		else
        {
		    j = i;
            while (buff[i] != '%' && buff[i] != '\0')
                i++;
            if ((new = ft_lstnew(ft_substr(&buff[j], 0, i - j))) == NULL)
            {
                ft_lstclear(&head, ft_free);
                return (-1);
            }
            ft_lstadd_back(&head, new);
        }
	}
	j = ft_lstprintf(&head);
//	ft_lstclear(&head, ft_free);
	va_end(ap);
	return (j);
}
