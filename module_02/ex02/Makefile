# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 10:35:01 by robrodri          #+#    #+#              #
#    Updated: 2021/12/10 10:35:01 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

VERSION = --std=c++98

CXXFLAGS = -Wall -Werror -Wextra $(VERSION)

SRCS = Fixed.cpp main.cpp

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
