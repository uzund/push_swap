# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duzun <davut@uzun.ist>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:45:00 by duzun             #+#    #+#              #
#    Updated: 2023/01/12 16:36:21 by duzun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

SRCS	=	ft_isin.c \
			ft_strncpy.c \
			ft_strndup.c \
			ft_split.c \
			ft_atof.c \
			ft_isdigit.c \
			ft_count_words.c \
			ft_isspace.c \
			ft_strjoin.c \
			ft_strlen.c
						
OBJS				=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)
					@echo "Libft Done !"
clean:	
					$(RM) $(OBJS) $(BONUS_OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean $(NAME)
										
.PHONY:	all clean fclean re