# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eonwe <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/08 15:54:15 by eonwe             #+#    #+#              #
#    Updated: 2018/08/15 16:13:15 by eonwe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
TAG = 	 gcc

# File Name
NAME =	 libftprintf.a

# Flages
CFLAGS = -Wall -Wextra -Werror

# Source Files
SRC = ft_printf.c\
	  ft_bzero.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_strcpy.c\
	  ft_strdup.c\
	  ft_strlen.c\
	  ft_strnew.c\
	  ft_strrev.c\
	  ft_strcat.c\
	  ft_putstr.c\
	  ft_mod.c\
	  ft_type.c\
	  ft_strncmp.c\
	  ft_strcmp.c\
	  add_width.c\
	  ft_atoi.c\
	  ft_wstr.c\
	  ft_memalloc.c\
	  cng_clr.c\
	  ft_strncat.c\
	  ft_strjoin.c\
	  wrt_nbr.c\
	  ft_lltoa.c\
	  ft_ultoa.c\
	  ft_lltoah.c\
	  ft_lltoao.c\
	  ft_base.c\
	  no_print.c\
	  fll_zero.c\
	  ft_putnstr.c\
	  ft_wnstrlen.c\
	  ft_wp.c\
	  ft_itoa.c\
	  ft_fmt.c\
	  ft_str_chr.c\
	  ft_putnwstr.c\
	  ft_putwstr.c\

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

# Compilation
$(NAME):
	@$(TAG) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[33;1m____________________Success!____________________\033[33;0m"
	@echo "\033[33;1m$(NAME)_______Created!____________________\033[33;0m"

# Deleting after compiling
clean:
	@/bin/rm -rf *.o
	@echo "\033[31;1m______________________*.o deleted!______________\033[31;0m"

fclean: clean
	@/bin/rm -rf *.a
	@echo "\033[31;1m_______________________*.a deleted!_____________\033[31;0m"

re: fclean all

.PHONY: all, clean, fclean, re
