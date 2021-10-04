# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 11:52:03 by mdenys            #+#    #+#              #
#    Updated: 2020/12/16 05:38:16 by mdenys           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  ft_printf.c parser/ft_parser.c parser/ft_parser_utils.c \
		putchar_maker/ft_put_c.c putchar_maker/put_d/ft_put_d.c putchar_maker/put_d/ft_put_d_utilc.c putchar_maker/ft_put_p.c putchar_maker/ft_put_s.c putchar_maker/ft_put_u.c putchar_maker/ft_put_x.c \
		putchar_maker/put_u/ft_put_u.c putchar_maker/put_u/ft_put_u_utilc.c\
		putchar_maker/put_x/ft_put_x.c putchar_maker/put_x/ft_put_x_utilc.c\
		putchar_maker/put_p/ft_put_p.c putchar_maker/put_p/ft_put_p_utilc.c\
		putchar_maker/putmaket_utils.c putchar_maker/put_d/ft_put_d_undersize.c

SURPL_O = *.o

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
