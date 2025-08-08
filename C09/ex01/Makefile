# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aasita <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 22:50:25 by aasita            #+#    #+#              #
#    Updated: 2025/08/08 02:41:16 by aasita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c \
       srcs/ft_swap.c \
       srcs/ft_putstr.c \
       srcs/ft_strlen.c \
       srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

INCLUDES = includes
CFLAGS = -Wall -Wextra -Werror
CC = cc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
