# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:48:30 by mcombeau          #+#    #+#              #
#    Updated: 2024/04/27 17:49:17 by gkviria          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar rcs
SRC = ft_isalpha \
      ft_isdigit \
      ft_strrchr

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<
