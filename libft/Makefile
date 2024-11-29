# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufalzone <ufalzone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 21:45:31 by ufalzone          #+#    #+#              #
#    Updated: 2024/11/29 19:15:06 by ufalzone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = cc
CFLAGS = -Wall -Werror -Wextra -I $(INCDIR)

# Répertoires
SRCDIR = srcs
PRINTF_DIR = ft_printf
INCDIR = includes

# Fichiers source
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
      ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
      ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
      ft_strdup.c ft_striteri.c ft_strjoin.c \
      ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
      ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
      $(PRINTF_DIR)/core/ft_printf.c \
      $(PRINTF_DIR)/utils/ft_hex_utils.c \
      $(PRINTF_DIR)/utils/ft_numbers_utils.c \
      $(PRINTF_DIR)/utils/ft_redirect_utils.c \
      $(PRINTF_DIR)/utils/ft_strings_utils.c \
      ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
      ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
      ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c \
      get_next_line.c get_next_line_utils.c
# BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
#         ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
#         ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c \
#         get_next_line.c get_next_line_utils.c

# Objets
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

# Règles principales
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c $(INCDIR)/libft.h $(INCDIR)/ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
