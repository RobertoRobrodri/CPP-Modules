# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 13:10:04 by robrodri          #+#    #+#              #
#    Updated: 2021/11/12 13:10:06 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)

CXXFLAGS = -Wall -Wextra -Werror

CXX = clang++

all: $(NAME)

$(NAME) :
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean
