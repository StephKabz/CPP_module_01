# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/27 21:45:27 by kingstephan       #+#    #+#              #
#    Updated: 2025/12/28 01:22:40 by kingstephan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =	newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \
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