# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 06:34:57 by dreinoso          #+#    #+#              #
#    Updated: 2025/06/12 19:16:50 by dreinoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -rf

LIBFT_DIR = libft

LIBFT_LIB = $(LIBFT_DIR)/libft.a

SRCS = pipex.c\
       pipex_utils.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT_LIB) $(NAME)

$(NAME): $(OBJS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_LIB)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
