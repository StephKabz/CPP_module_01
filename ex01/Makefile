# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/28 02:48:48 by kingstephan       #+#    #+#              #
#    Updated: 2025/12/28 03:48:20 by kingstephan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =	Zombie.cpp \
		zombieHorde.cpp \
		main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "nothing to clean"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re