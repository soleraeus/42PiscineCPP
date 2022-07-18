# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 13:18:57 by bdetune           #+#    #+#              #
#    Updated: 2022/07/18 11:55:00 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= convert

SRCS= main.cpp
OBJS:= $(SRCS:.cpp=.o)

CPP= c++
CPPFLAGS= -Wall -Wextra -Werror -Wno-shadow -std=c++98

${NAME}:	$(OBJS)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

.SECONDARY:	$(OBJS)

clean:	
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.cpp.o:
		$(CPP) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}
