# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 12:40:49 by robrodri          #+#    #+#              #
#    Updated: 2021/12/07 12:40:49 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde

CFLAGS = -Wall -Werror -Wextra

SRCS = Zombie.cpp main.cpp ZombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
