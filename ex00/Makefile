CC       = g++
CFLAGS   = -Wall -Wextra -Werror -std=c++98

SRC      = main.cpp \

OBJ_DIR  = Zombie_objects
OBJ      = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))

TARGET   = Zombie

all: $(OBJ_DIR) $(TARGET)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
