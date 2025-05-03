# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/03 03:19:38 by achahlao          #+#    #+#              #
#    Updated: 2025/05/03 06:42:12 by achahlao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
NAME	= animal
HEADS	= Animal.hpp Brain.hpp Cat.hpp Dog.hpp
SRCS	= Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CFLAGS	= -Wall -Werror -Wextra -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o		: %.cpp $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: clean