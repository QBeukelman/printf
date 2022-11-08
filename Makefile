
LIBFT = ./libft/libft.a
NAME = libftprintf.a
CC = gcc
FLAGS = -c -Wall -Werror -Wextra
INCLUDES = -I./INCLUDES

# List source files.
SRCS = ft_printf.c \
	sources/ft_printf_tools.c \
	sources/ft_printf_pointers.c \
	sources/ft_print_unsigned.c \
	sources/ft_print_hex.c \
	main.c \

# List object files.
EXTRA_O = ft_printf_tools.o \
	ft_printf_pointers.o \
	ft_print_unsigned.o \
	ft_print_hex.o \
	main.o \

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) all -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(EXTRA_O)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
