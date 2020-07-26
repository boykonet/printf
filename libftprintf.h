/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:57:04 by gkarina           #+#    #+#             */
/*   Updated: 2020/06/18 14:57:04 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
#include "./libft/libft.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define UNS_INT_MAX 4294967295

typedef struct		s_data
{
	char			*buff;
	char			*var;
	int				sign;
	int				dot;
	int				size;
	int				count;
	int				num_1;
	int				num_2;
	int				s_arr;
	int             n_num;
	int             num_1_n;
	int             num_2_n;
	int             flag;
	int             s_check;
	int             ss_check;
	int				err;
}					t_data;

int					ft_printf(const char *fmt, ...);
char				*ft_itoa_base(long int num, size_t base);
void				write_printf(char *line, int len);
int					printf_c(t_data *data, va_list ap, char *s);
int					printf_s(t_data *data, va_list ap, char *s);
int					printf_p(t_data *data, va_list ap, char *s);
int					printf_d_and_i(t_data *data, va_list ap, char *s);
int					printf_u(t_data *data, va_list ap, char *s);
int					printf_x_and_x_big(t_data *data, va_list ap, char *s);
int					printf_percent(t_data *data, va_list ap, char *s);
int					checker_printf(t_data *data, va_list ap, char ch);
char				*alloc_array(t_data *dt, char *bo);
int					dist_printf(t_data *data);
char				*fill_array(t_data *data, char *bo, int len_bo,
					int differ_num);
int					mapi_printf(t_data *data, va_list ap, char const c,
					int (*func)(t_data*, va_list));

#endif
