# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 13:17:24 by pschmunk          #+#    #+#              #
#    Updated: 2024/11/26 18:03:09 by pschmunk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_04 = brainanimal

CPP_04_SRC =	./main.cpp			\
				./Animal.cpp		\
				./Cat.cpp			\
				./Dog.cpp			\
				./WrongAnimal.cpp	\
				./WrongCat.cpp		\
				./Brain.cpp			\

CPP_04_OBJ = $(CPP_04_SRC:.cpp=.o)

all: $(CPP_04)

$(CPP_04): $(CPP_04_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_04_OBJ) $(LIBFT) -o brainanimal

clean:
	$(RM) $(CPP_04_OBJ)
fclean: clean
	$(RM) $(CPP_04)
re: fclean all

.PHONY : all clean fclean re