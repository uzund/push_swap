# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duzun <davut@uzun.ist>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:45:00 by duzun             #+#    #+#              #
#    Updated: 2023/02/19 21:09:15 by duzun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

SRCS =  $(wildcard *.c)	
						
OBJS				=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)
					@echo "\n✅ Libft Done!"
clean:	
					$(RM) $(OBJS) $(BONUS_OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean $(NAME)
										
.PHONY:	all clean fclean re