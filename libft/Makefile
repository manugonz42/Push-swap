# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manugonz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 17:23:36 by manugonz          #+#    #+#              #
#    Updated: 2023/03/04 17:23:40 by manugonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.SILENT:

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memmove.c ft_memcmp.c ft_strlcpy.c ft_strnstr.c \
		ft_strlcat.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
		ft_striteri.c ft_strmapi.c

OBJS = $(SRCS:.c=.o)
	
BSOURCES = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c

BOBJECTS = $(BSOURCES:.c=.o)
	
all: $(NAME)

so:
	@$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	@gcc -nostartfiles -shared -o libft.so $(OBJ)

$(NAME): $(OBJS)
	@ar -rcs $@ $(OBJS) 

bonus: $(OBJECTS) $(BOBJECTS)
	@$(AR) -rcs $(NAME) $?

clean:
	@rm -rf $(OBJS) $(BOBJECTS)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
