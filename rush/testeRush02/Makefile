TARGET = rush-02
SRCS = main.c convert_number.c parse_dict.c utils.c
OBJS = $(SRCS:.c=.o)
cc = cc
CFLAGS = -Wall -Wextra -Werror
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	@$(MAKE) clean
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re: fclean all
