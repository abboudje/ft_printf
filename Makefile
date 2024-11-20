# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:24:01 by abboudje          #+#    #+#              #
#    Updated: 2024/06/13 17:30:13 by abboudje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
SRCS		=	ft_print_std.c ft_printf.c ft_print_hexa.c ft_print_hptr.c ft_itoa.c ft_uitoa.c ft_nbrlen.c
OBJS		=	$(SRCS:.c=.o)
CC			=	cc
RM			=	rm -f
CFLAGS		=  -Wall -Wextra -Werror -I .

all:	$(NAME)
$(NAME):	$(OBJS)
	ar rcs	$(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re:	fclean all
app:	$(OBJS)
	$(CC) $(CFLAGS) -o app $(OBJS)
.PHONY:	all clean fclean re