NAME = span

VERSION = --std=c++98

CXXFLAGS = -Wall -Werror -Wextra $(VERSION)

SRCS = span.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
