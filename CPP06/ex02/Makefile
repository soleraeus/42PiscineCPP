# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 13:18:57 by bdetune           #+#    #+#              #
#    Updated: 2022/07/28 11:52:10 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= identifier

SRCS= main.cpp generate.cpp identify.cpp
INC=  Base.hpp A.hpp B.hpp C.hpp
OBJS:= $(SRCS:.cpp=.o)

CPP= c++
CPPFLAGS= -Wall -Wextra -Werror -Wshadow -std=c++98

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
