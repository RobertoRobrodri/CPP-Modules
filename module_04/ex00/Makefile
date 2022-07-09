# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 12:47:27 by robrodri          #+#    #+#              #
#    Updated: 2022/01/20 12:47:27 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

VERSION = --std=c++98

CXXFLAGS = -Wall -Werror -Wextra $(VERSION)

SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

CXX = g++

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
