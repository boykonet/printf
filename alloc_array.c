/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 19:09:50 by gkarina           #+#    #+#             */
/*   Updated: 2020/07/19 19:09:50 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*alloc_array(t_data *dt, char *bo)
{
	if ((dt->var = (char*)malloc(sizeof(char) * (dt->s_arr + 1))) == NULL)
	{
		free(bo);
		return (NULL);
	}
	return (dt->var);
}
