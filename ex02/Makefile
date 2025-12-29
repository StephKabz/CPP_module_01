# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 00:46:44 by kingstephan       #+#    #+#              #
#    Updated: 2025/12/29 00:47:39 by kingstephan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = reference
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =	main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "nothing to clean"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re