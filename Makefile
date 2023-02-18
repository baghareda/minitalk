# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 00:28:26 by rebagha           #+#    #+#              #
#    Updated: 2023/02/18 22:45:23 by rebagha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
CLI_NAME = client
SRV_NAME = server

SRCS =  utils/ft_un_putnbr.c \
        utils/ft_atoi.c \
        utils/ft_adress.c \
        utils/ft_hexa.c \
        utils/ft_printf.c \
        utils/ft_putchar.c \
        utils/ft_putnbr.c \
        utils/ft_putstr.c \
		
CLI_SRC = client.c 
SRV_SRC = server.c

CLI_SRC_B = client_bonus.c 
SRV_SRC_B = server_bonus.c

SRCS_B = $(SRCS)

OBJ = $(SRCS:.c=.o)
OBJ_B = $(SRCS_B:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(CLI_NAME) $(SRV_NAME)

bonus: $(CLI_NAME)_bonus $(SRV_NAME)_bonus

$(SRV_NAME): $(SRV_SRC) $(OBJ)
	cc $(FLAGS) $(OBJ) $(SRV_SRC) -o $(SRV_NAME)

$(CLI_NAME): $(CLI_SRC) $(OBJ)
	cc $(FLAGS) $(OBJ) $(CLI_SRC) -o $(CLI_NAME)

$(SRV_NAME)_bonus: $(SRV_SRC_B) $(OBJ_B)
	cc $(FLAGS) $(OBJ_B) $(SRV_SRC_B) -o $(SRV_NAME)

$(CLI_NAME)_bonus: $(CLI_SRC_B) $(OBJ_B)
	cc $(FLAGS) $(OBJ_B) $(CLI_SRC_B) -o $(CLI_NAME)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME) $(CLI_NAME) $(SRV_NAME) $(CLI_NAME)_bonus $(SRV_NAME)_bonus

re: fclean all
