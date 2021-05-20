GCC=gcc
TARGET=do-op
INC_DIR=includes
SRC_DIR=srcs
OBJS=$(SOUS:.c=.o)
SOUS=$(SRC_DIR)/main.c $(SRC_DIR)/op.c $(SRC_DIR)/sub_ft.c
CFLAGS=-Wall -Wextra -Werror

.PHONY: clean fclean re all

all : $(TARGET)

.c.o :
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC_DIR)

$(TARGET) : $(OBJS)
	$(GCC) -o $(TARGET) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
