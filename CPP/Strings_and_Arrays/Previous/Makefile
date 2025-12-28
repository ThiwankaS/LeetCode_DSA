NAME = test

CMD =  g++

FLAGS = -Wall -Werror -Wextra -std=c++20 -g

SRCS = twoSum.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CMD) $(FLAGS) $(OBJS) -o $@


%.o : %.cpp
	$(CMD) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
