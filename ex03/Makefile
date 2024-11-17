# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 00:30:33 by linyao            #+#    #+#              #
#    Updated: 2024/11/17 01:04:58 by linyao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -Wshadow
RM = rm -rf

INC = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp $(INC)
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re