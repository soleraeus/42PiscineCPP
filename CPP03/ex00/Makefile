# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 13:18:57 by bdetune           #+#    #+#              #
#    Updated: 2022/07/04 13:44:06 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ClapTrap

SRCS= main.cpp ClapTrap.cpp
INC=  ClapTrap.hpp
OBJS:= $(SRCS:.cpp=.o)

CPP= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

${NAME}:	$(OBJS) $(INC)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

.SECONDARY:	$(OBJS)

clean:	
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

$(OBJS):	$(INC)

.cpp.o:
		$(CPP) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}
