# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 00:28:26 by rebagha           #+#    #+#              #
#    Updated: 2023/02/17 00:57:40 by rebagha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
CLI_NAME = client
SRV_NAME = server

SRCS =  utils/ft_putnbr_fd.c \
		utils/ft_atoi.c \
		utils/ft_adress.c \
		utils/ft_hexa.c \
		utils/ft_putchar.c \
		utils/ft_putchar_fd.c \

CLI_SRC = client.c 
SRV_SRC = server.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(CLI_NAME) $(SRV_NAME)


$(SRV_NAME) : $(SRV_SRC) $(OBJ)
	cc $(FLAGS) $(OBJ) $(SRV_SRC) -o $(SRV_NAME)

$(CLI_NAME) : $(CLI_SRC) $(OBJ)
	cc $(FLAGS) $(OBJ) $(CLI_SRC) -o $(CLI_NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) $(CLI_NAME) $(SRV_NAME)

re : fclean all

