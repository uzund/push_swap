# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duzun <davut@uzun.ist>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:23:07 by duzun             #+#    #+#              #
#    Updated: 2023/01/14 03:23:16 by duzun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			= \033[0;31m
GREEN		= \033[0;32m
BLUE		= \033[0;34m
RESET		= \033[0m
END			= \e[0m

SRCS		= 	srcs/push_swap.c \
				srcs/ft_sum_str.c \
				srcs/ft_check_number.c \
				srcs/ft_check_minmax.c \
				srcs/ft_array_dup.c \
				srcs/ft_sum.c \
				srcs/ft_sort_master.c \
				srcs/ft_sort_two.c \
				srcs/ft_sort_three.c \
				srcs/ft_sort_five.c \
				srcs/ft_sort_all.c \
				srcs/ft_ra.c \
				srcs/ft_check_duplicate.c \
				srcs/ft_check_null.c \
				srcs/ft_sa.c \
				srcs/ft_rra.c
				
NAME		=	push_swap
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -std=c11 -g
RM			=	rm -f
OBJS_DIR	= 	objs/
PROJECT_H	= 	srcs/push_swap.h
OBJS		=	$(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

$(OBJS_DIR)%.o : %.c $(PROJECT_H)
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)srcs
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf	"\033[2K\r${RED}[DERLENİYOR! / COMPILING!]${RESET} '$<' $(END)"

$(NAME): $(OBJECTS_PREFIXED) makerun
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CFLAGS) ./libft/libft.a
	@printf "\033[2K\r${GREEN}[KURULUM TAMAMLANDI]${BLUE} -- >${RED} $(NAME) ${BLUE}< --${RESET}$(END)\a\n"
	@printf "\033[2K\r${RED}Çalıştırmak için: ${BLUE} ./push_swap <arguman> ${GREEN} // örnek: ./push_swap 8 3 5 1 9)${RESET}$(END)\n"
	@printf "\033[2K\r${GREEN}[INSTALLATION COMPLETED]${BLUE} -- >${RED} $(NAME) ${BLUE}< --${RESET}$(END)\a\n"
	@printf "\033[2K\r${RED}To make it work: ${BLUE} ./push_swap <arguman> ${GREEN} // ./push_swap 8 3 5 1 9)${RESET}$(END)\n"

all: $(NAME)	

makerun:
	@make -C ./libft
 
clean:
	@make clean -C ./libft
	@rm -rf $(OBJS_DIR)
	@printf "\033[2K\r${GREEN}[CLEAN]${RED}[TAMAMLANDI / COMPLETED]${RESET}$(END)\a\n"

fclean: clean
	@make fclean -C ./libft
	@rm -f $(NAME)
	@printf "\033[2K\r${GREEN}[FCLEAN]${RED}[TAMAMLANDI / COMPLETED]${RESET}$(END)\a\n"
	
re:	fclean all
				
.PHONY:	all clean fclean re				