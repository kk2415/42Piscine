GCC=gcc
TARGET=libft.a
SRC_DIR=srcs
INC_DIR=includes
OBJS=$(SOUS:.c=.o)
SOUS=$(SRC_DIR)/ft_putchar.c  $(SRC_DIR)/ft_putstr.c  $(SRC_DIR)/ft_strcmp.c  $(SRC_DIR)/ft_strlen.c  $(SRC_DIR)/ft_swap.c
CFLAGS=-Wall -Wextra -Werror

.PHONY: clean fclean re all

all : $(TARGET)

.c.o :
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC_DIR)

$(TARGET) : $(OBJS)
	ar crv $@ $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
