.SILENT:

TARGET = push_swap

# Archives
SOURCEDIR = sources/
SOURCES = ft_exit.c ft_first_steps.c main.c ft_lst_mod.c ft_check.c \
			ft_moves_sp.c ft_moves_r.c ft_moves_rr.c ft_3_and_5.c ft_radix.c
SOURCES := $(addprefix $(SOURCEDIR), $(SOURCES))

# Colors
CYAN = \033[0;36m
RESET = \033[0M
BLACK = \033[0;30m
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m

# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# libraries
LIBFT  = libft/libft.a
LIBFTDIR = libft/

# Objets
OBJECTS = $(SOURCES:.c=.o)

# Rules
all: $(TARGET)

$(LIBFT):
	@echo "$(CYAN)--Compiling Libft$(RESET)"
	@make -s -C $(LIBFTDIR)

$(TARGET): $(OBJECTS) $(LIBFT)
	@echo "$(CYAN)--Compiling $(YELLOW)push_swap $(CYAN)ejecutable$(RESET)"
	@$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LIBFT)
	@echo "$(CYAN)--Done$(RESET)"

# Cleaning
clean:
	@echo "$(MAGENTA)--Deleting .o archives$(RESET)"
	@$(MAKE) -s clean -C $(LIBFTDIR)
	@rm -f $(OBJECTS) 

fclean: clean
	@echo "$(MAGENTA)--Deleting .a archives$(RESET)"
	@$(MAKE) -s fclean -C $(LIBFTDIR)
	@rm -f $(TARGET)
re:	fclean
	@echo "$(BLUE)--Remaking all...$(RESET)"
	@$(MAKE) -s all -C $(LIBFTDIR)
	@$(MAKE) -s all
