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
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_printf(const char *fmt, ...);
char				*ft_itoa_base(long long int num, size_t base);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
char				*ft_itoa(int n);
char				*ft_strdup(const char *s1);
char	            *ft_strjoin(char const *s1, char const *s2);
void	            *ft_memset(void *b, int c, size_t len);
int					ft_atoi(const char *str);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void	            ft_lstclear(t_list **lst, void (*del)(void *));
void                ft_free(void *content);

#endif
