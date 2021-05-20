GCC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=ft_cat
OBJS=main.o
SOUS=main.c

.PHONY : all clean fclean

all : $(TARGET)

$(OBJS) : $(SOUS)
	$(GCC) $(CFLAGS) -c $(SOUS)

$(TARGET) : $(OBJS)
	$(GCC) -o $(TARGET) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)
