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

REG_OBJ_FILES = ft_printf.o ft_substr.o ft_strlen.o

BONUS_OBJ_FILES =

ifdef WITH_BONUS
OBJ_FILES = $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)
else
OBJ_FILES = $(REG_OBJ_FILES)
endif

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) -c $(FLAGS) -o $@ $<

clean:
	rm -f $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

bonus:
	$(MAKE) WITH_BONUS=1 all
