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
//cspdiuxX%

char	*ft_printf_c(va_list ap)
{
	char	c;
	char	*cc;

	c = (char)va_arg(ap, int);
	cc = (char*)malloc(sizeof(char) * 2);
	cc[0] = c;
	cc[1] = '\0';
	return (cc);
}

char	*ft_printf_s(va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	return (s);
}

char		*ft_printf_p(va_list ap)
{
	char		*p;
	char		*pp;
	char		*var;
	int			num;
    unsigned int	*i;
	int			count;
	int			j;

	var = "0x";
	j = 0;
	num = va_arg(ap, int);
	i = (unsigned int*)&num;
	p = ft_itoa_base(*i, 16);
	count = ft_strlen(p) + ft_strlen(var);
	if ((pp = (char*)malloc(sizeof(char) * (count + 1))) == NULL)
		return (NULL);
	pp[count] = '\0';
	j = count - ft_strlen(var);
	printf("j = %d\n", j);
	while (count > 0)
		pp[--count] = p[j--];
	j = ft_strlen(var);
	printf("j = %d\n", j);
	printf("count = %d\n", count);
	while (j > 0)
		pp[--count] = var[--j];
	free(p);
	printf("pp = %s\n", pp);
	return (pp);
}

char	*ft_printf_d_and_i(va_list ap)
{
	int		num;
	char	*d;

	num = va_arg(ap, int);
	d = ft_itoa(num);
	return (d);
}

char	*ft_printf_u(va_list ap)
{
	char			*uu;
	unsigned int	u;

	u = (unsigned int)va_arg(ap, int);
	uu = ft_itoa(u);
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

char	*ft_printf_all(const char *buff, va_list ap)
{
	char	*ukaz;

	ukaz = NULL;
	if (*buff == 'c')
		ukaz = ft_printf_c(ap);
	else if (*buff == 's')
		ukaz = ft_printf_s(ap);
	else if (*buff == 'p')
		ukaz = ft_printf_p(ap);
	else if (*buff == 'd' || *buff == 'i')
		ukaz = ft_printf_d_and_i(ap);
	else if (*buff == 'u')
		ukaz = ft_printf_u(ap);
	else if (*buff == 'x')
		ukaz = ft_printf_x(ap);
	else if (*buff == 'X')
		ukaz = ft_printf_x_big(ap);
	return (ukaz);
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

    va_start(ap, fmt);
    i = 0;
    buff = ft_strdup(fmt);
    head = new;
	while (buff[i])
    {
        if (buff[i] == '%')
        {
            new = ft_lstnew(ft_printf_all(&buff[++i], ap));
            ft_lstadd_back(&head, new);
            i++;
        }
		else
        {
		    j = i;
            while (buff[i] != '%' && buff[i] != '\0')
                i++;
            new = ft_lstnew(ft_substr(&buff[j], 0, i - j));
            ft_lstadd_back(&head, new);
        }
	}
	j = ft_lstprintf(&head);
//	ft_lstclear(&head, ft_free);
	va_end(ap);
	return (j);
}
