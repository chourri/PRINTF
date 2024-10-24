# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chourri <chourri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 15:04:17 by chourri           #+#    #+#              #
#    Updated: 2023/12/26 15:42:05 by chourri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f
SRCS = ft_print_char_str.c \
 ft_print_format.c \
 ft_print_hexadecimal.c \
 ft_print_number.c \
 ft_print_pointer.c \
 ft_print_unsigned.c \
 ft_printf.c \


OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)


%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean
