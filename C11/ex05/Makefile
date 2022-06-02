# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 20:04:14 by changhle          #+#    #+#              #
#    Updated: 2021/09/30 20:09:35 by changhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = do-op
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_atoi.o operator.o main.o
HEAD = ft_print_result.h ft_atoi.h operator.h

all: do-op

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) -c ft_atoi.c

operator.o: operator.c ft_print_result.h
	$(CC) $(CFLAGS) -c operator.c

main.o: main.c ft_atoi.h operator.h
	$(CC) $(CFLAGS) -I$(HEAD) -c main.c

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
