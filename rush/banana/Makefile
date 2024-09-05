NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC = main.c parse_dict.c parse_utils.c print_number.c utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

run: $(NAME)
	./$(NAME)

clean:
	rm -f $(NAME) $(OBJ)
