# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 13:18:57 by bdetune           #+#    #+#              #
#    Updated: 2022/07/26 12:57:00 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= array

INC= Array.hpp Array.tpp Fixed.hpp
SRCS= main.cpp Fixed.cpp

OBJS:= $(SRCS:.cpp=.o)

CPP= c++
CPPFLAGS= -Wall -Wextra -Werror -Wshadow -g -std=c++98

${NAME}:	$(OBJS)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

$(OBJS):	$(INC)

.SECONDARY:	$(OBJS)

clean:	
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.cpp.o:
		$(CPP) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}
