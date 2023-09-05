# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 12:00:08 by rnogueir          #+#    #+#              #
#    Updated: 2023/09/05 12:24:56 by rnogueir         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

NAME	=	bsq

CC	=	cc
RM	= 	rm -rf	

CFLAGS	=	-Wall -Werror -Wextra
SRC	= 	$(wildcard *.c)
OBJ	=	$(SRC:.c=.o)

all: $(NAME)	

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ) $(NAME)
