# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 14:21:18 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/01 14:21:25 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = liftprintf.a

SRCS =

OBJS =

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : srcs
	  ar -rc $(NAME) $(OBJS)

srcs:
	$(CC) $(CC_FLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
