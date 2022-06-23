# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: intonoya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 16:45:51 by intonoya          #+#    #+#              #
#    Updated: 2022/05/14 16:46:00 by intonoya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT	=	./libft/libft.a

NAME	=	libftprintf.a

SRCS	=	$(wildcard *.c)

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

INCLUDES	= -I./includes

OBJS	=	$(SRCS:.c=.o)

$(NAME)	=	$(OBJS)
			$(NAME) clean -C ./libft
			cp libft/libft.a $(NAME)
			$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
			ar rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
		$(NAME) clean -C ./libft
		rm -rf $(SUPRL_O)
		rm -rf $(OBJS)

fclean:	clean
			$(MAKE) fclean -C ./libft
			rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
