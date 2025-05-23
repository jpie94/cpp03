# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 11:00:17 by jpiech            #+#    #+#              #
#    Updated: 2025/05/23 12:39:42 by jpiech           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./DiamondTrap
SRCS = $(addprefix srcs/, main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp)
INCLUDES = ./includes
OBJS = $(SRCS:.cpp=.o)
COMP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -Wshadow -Wno-shadow

all : $(NAME)

%.o : %.cpp
	$(COMP) $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME) : $(OBJS)
	$(COMP) $(FLAGS) -I $(INCLUDES) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

test :
	valgrind --leak-check=full --show-leak-kinds=all $(NAME)

.PHONY: all clean fclean re valgrind 
