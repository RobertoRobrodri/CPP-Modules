# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 10:57:23 by robrodri          #+#    #+#              #
#    Updated: 2022/02/09 10:57:23 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

VERSION = --std=c++98

CXXFLAGS = -Wall -Werror -Wextra $(VERSION)

SRCS = Bureaucrat.cpp main.cpp Form.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

CXX = clang++

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
