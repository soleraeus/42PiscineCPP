# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 13:18:57 by bdetune           #+#    #+#              #
#    Updated: 2022/07/05 12:49:13 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= FragTrap

SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INC=  ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
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
