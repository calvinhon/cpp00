# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chon <chon@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 12:01:07 by chon              #+#    #+#              #
#    Updated: 2024/10/28 16:17:05 by chon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dreamjob
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
OBJS = $(SRCS:.cpp=.o)
SRCS = tests.cpp Account.cpp

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean re
