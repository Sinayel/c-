<<<<<<< HEAD
NAME = zombie

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

=======
NAME = Zombie

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = Zombie.cpp \
       main.cpp \
       newZombie.cpp \
       randomChump.cpp \

OBJ_DIR = obj
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

>>>>>>> 7f30b27a6512db1999d45c2adbbbf12a2b3ba568
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
<<<<<<< HEAD
	rm -f $(OBJS)
=======
	rm -rf $(OBJ_DIR)
>>>>>>> 7f30b27a6512db1999d45c2adbbbf12a2b3ba568

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re