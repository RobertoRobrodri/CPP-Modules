# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 12:36:43 by robrodri          #+#    #+#              #
#    Updated: 2022/01/29 12:36:43 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materias

CXXFLAGS = -Wall -Werror -Wextra

SRCS = AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp main.cpp

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
