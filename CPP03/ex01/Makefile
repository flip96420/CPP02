# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 13:17:24 by pschmunk          #+#    #+#              #
#    Updated: 2024/11/22 17:51:51 by pschmunk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_03 = scavtrap

CPP_03_SRC =	./main.cpp		\
				./ClapTrap.cpp	\

CPP_03_OBJ = $(CPP_03_SRC:.cpp=.o)

all: $(CPP_03)

$(CPP_03): $(CPP_03_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_03_OBJ) $(LIBFT) -o scavtrap

clean:
	$(RM) $(CPP_03_OBJ)
fclean: clean
	$(RM) $(CPP_03)
re: fclean all

.PHONY : all clean fclean re