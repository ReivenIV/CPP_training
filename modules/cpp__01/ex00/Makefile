# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 16:21:23 by yes_we_can        #+#    #+#              #
#    Updated: 2025/05/30 16:24:11 by yes_we_can       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PROYECT_NAME        := zombie
COMPILE      	    := c++
FLAGS_PARAMS       := -Wall -Wextra -Werror -std=c++98

 
SRCS        := Zombie.cpp  main.cpp  newZombie.cpp  randomChump.cpp

OBJS        := $(addprefix objs/, $(SRCS:.cpp=.o))

CLR_RMV		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM			:= rm -f
MKDIR		:= mkdir -p

$(PROYECT_NAME):	$(OBJS)
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(PROYECT_NAME) ${CLR_RMV}..."
			${COMPILE} ${FLAGS_PARAMS} -o ${PROYECT_NAME} $(OBJS)
			@echo "$(GREEN)$(PROYECT_NAME) created${CLR_RMV} ✔️"

all:		$(PROYECT_NAME)

clean:
			@ ${RM} objs/*.o
			@ echo "$(RED)Deleting $(CYAN)$(PROYECT_NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${PROYECT_NAME}
			@ echo "$(RED)Deleting $(CYAN)$(PROYECT_NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

objs/%.o:	%.cpp
			@ ${MKDIR} objs
			${COMPILE} ${FLAGS_PARAMS} -c $< -o $@

.PHONY:		all clean fclean re