# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 16:09:20 by robrodri          #+#    #+#              #
#    Updated: 2021/12/07 16:09:52 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CXXFLAGS = -Wall -Werror -Wextra $(VERSION)

VERSION = --std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = g++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
