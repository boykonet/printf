/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 17:45:46 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/17 17:45:46 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	write_printf(char *line, int len)
{
	write(1, line, len);
}