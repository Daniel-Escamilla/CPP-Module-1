NAME = horde
CC = g++
CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJS = $(SRC:.cpp=.o)
OBJDIR = horde_objects

all: $(OBJDIR) $(NAME)

$(NAME): $(addprefix $(OBJDIR)/, $(OBJS))
	$(CC) $(CFLAGS) -o $@ $(addprefix $(OBJDIR)/, $(OBJS))

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
