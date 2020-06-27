/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:47:30 by gkarina           #+#    #+#             */
/*   Updated: 2020/06/22 17:47:30 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_itoa_count(unsigned int num, int base)
{
	int		count;

	count = 0;
	if (num == 0)
		count++;
	while (num != 0)
	{
		count++;
		num = num / base;
	}
	return (count);
}

static void	ft_itoa_positive(char *res, unsigned int num, int base, int count)
{
	char	*r;
	int		n;

	r = "0123456789abcdef";
	if (num == 0)
		res[--count] = r[0];
	while (count > 0 && num != 0)
	{
		n = (num % base);
		res[--count] = r[n];
		num = num / base;
	}
}

char		*ft_itoa_base(unsigned int num, int base)
{
	char	*result;
	int		count;

	result = NULL;
	count = ft_itoa_count(num, base);
	if ((result = (char*)malloc(sizeof(char) * (count + 1))) == NULL)
		return (NULL);
	result[count] = '\0';
	ft_itoa_positive(result, num, base, count);
	return (result);
}
