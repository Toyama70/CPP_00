# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 12:59:53 by yasinbest         #+#    #+#              #
#    Updated: 2022/04/05 11:14:26 by ybestrio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -I. -std=c++98

RM = rm -rf

SRCS = 	*.cpp

$(NAME) :
	clang++ $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re