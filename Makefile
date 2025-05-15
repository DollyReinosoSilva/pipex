# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 06:34:57 by dreinoso          #+#    #+#              #
#    Updated: 2025/05/09 06:35:00 by dreinoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRCS = pipe.c \
		child_processes.c \
		error_handling.c \
		com,,and_utils.c

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

INCLUDES = - I. -I$(LIBFT_DIR)

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c
$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@make clean -c $(LIBFT_DIR)
	@rm -f $(NAME)

fclean: clean
	@make fclean -c $(LIBFT_DIR)
	@rm -f $(NAME)

re: fclean all
# Regla para bonus (si implementas la parte bonus)
# SRCS_BONUS = pipex_bonus.c ...
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# bonus: $(OBJS_BONUS) $(LIBFT)
# 	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIBFT) -o $(NAME)_bonus
# clean: ... rm -f $(OBJS_BONUS)
# fclean: ... rm -f $(NAME)_bonus
.PHONY: all clean fclean re bonus
