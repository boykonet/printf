# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkarina <gkarina@student.21-school.r       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/18 16:59:26 by gkarina           #+#    #+#              #
#    Updated: 2020/06/18 16:59:26 by gkarina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	   ft_itoa_base.c \
	   write_printf.c \
	   checker_printf.c \
	   alloc_array.c \
	   dist_printf.c \
	   fill_array.c \
	   printf_spec.c \
	   printf_c.c \
	   printf_s.c \
	   printf_p.c \
	   printf_d_and_i.c \
	   printf_u.c \
	   printf_x_and_x_big.c \
	   printf_percent.c \

OBJS = $(SRCS:%.c=%.o)

INCLUDES = ./

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	cp ./libft/libft.a .
	mv libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) -I$(INCLUDES) -o $@ $<

clean:
	make fclean -C ./libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

bonus:
	$(MAKE) WITH_BONUS=1 all

rule:
	$(MAKE) all
	$(CC) main.c -L. -lftprintf
	./a.out
	rm -f a.out
