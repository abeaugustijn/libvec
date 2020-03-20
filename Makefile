# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/20 11:37:31 by aaugusti          #+#    #+#              #
#    Updated: 2020/03/20 12:00:04 by aaugusti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libvec.a

SRCS			=	add\
					angle\
					compare\
					crossp\
					dist\
					dotp\
					float_compare\
					from_to\
					is_normal\
					len\
					multiply\
					new\
					normalize\
					rot\
					sub\


CFILES			=	$(SRCS:%=vec_%.c)
OFILES			=	$(SRCS:%=vec_%.o)

FLAGS			=	-Wall -Werror -Wextra -O3

ifeq ($(shell uname -s 2>/dev/null),Linux)
FLAGS			+= -lm
endif

AR_COMMAND		= ar rs

all: $(NAME)

$(NAME): $(OFILES)
	$(AR_COMMAND) $(NAME) $(OFILES)

%.o: %.c
	gcc -o $@ -c $< $(FLAGS)

clean: _clean

fclean: _clean
	rm -f $(NAME) test

_clean:
	rm -f $(OFILES) test.o

re: fclean all
