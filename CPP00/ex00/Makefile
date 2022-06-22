# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 13:18:57 by bdetune           #+#    #+#              #
#    Updated: 2022/06/22 13:25:09 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: megaphone

SRCS: megaphone.cpp
OBJS:= $(SRCS:.cpp=.o)

CPP: c++
CPPFLAGS: -Wall -Wextra -Werror -std=c++98

${NAME}:	$(OBJS)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

.cpp.o:
		$(CPP) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}
