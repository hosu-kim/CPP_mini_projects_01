CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = zombie
SRCS = main.cpp Zombie.cpp zombieHorde.cpp # 소스 파일들
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re