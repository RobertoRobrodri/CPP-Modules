# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 16:23:34 by robrodri          #+#    #+#              #
#    Updated: 2021/12/07 16:24:38 by robrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cp

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
