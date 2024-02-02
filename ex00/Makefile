# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 14:20:58 by azgaoua           #+#    #+#              #
#    Updated: 2024/02/02 17:33:07 by azgaoua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = run_ex00

OBJS = ClapTrap.o main.o

FILES = ClapTrap.cpp main.cpp

CXX = c++

RM = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all :  $(NAME)

%.o: %.cpp ClapTrap.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) :  $(OBJS) $(FILES)
	@echo "------>making the ex00<------"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "--------->ex00 Done<---------"

clean:
	@echo " remove $(OBJS)"
	@$(RM) $(OBJS)

fclean:  clean
	@echo " clean --> $(NAME)"
	@$(RM) $(NAME)

re: fclean all