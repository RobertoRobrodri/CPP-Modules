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

NAME = Materia

CXXFLAGS = -Wall -Werror -Wextra

SRCS = AMateria.cpp ICharacter.cpp IMateriaSource.cpp main.cpp

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
