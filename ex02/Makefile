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

CPP_02 = fixed

CPP_02_SRC =	./main.cpp		\
				./Fixed.cpp		\

CPP_02_OBJ = $(CPP_02_SRC:.cpp=.o)

all: $(CPP_02)

$(CPP_02): $(CPP_02_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_02_OBJ) $(LIBFT) -o fixed

clean:
	$(RM) $(CPP_02_OBJ)
fclean: clean
	$(RM) $(CPP_02)
re: fclean all

.PHONY : all clean fclean re