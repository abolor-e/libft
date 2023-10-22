# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 13:51:08 by abolor-e          #+#    #+#              #
#    Updated: 2023/10/22 14:07:21 by abolor-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc		= cc

cflags	= -Wall -Wextra -Werror

rm		= rm -f

name	= libft.a

all:	${name}

srcs		= ft_isalpha.c	\
			  ft_isdigit.c	\
			  ft_isalnum.c	\
			  ft_isascii.c	\
			  ft_isprint.c	\
			  ft_strlen.c	\
			  ft_memset.c	\
			  ft_bzero.c	\
			  ft_memcpy.c	\
			  ft_memmove.c	\
			  ft_strlcpy.c	\
			  ft_strlcat.c	\
			  ft_calloc.c	\
			  ft_strdup.c	\
			  ft_toupper.c	\
			  ft_tolower.c	\
			  ft_strchr.c	\
			  ft_strrchr.c	\
			  ft_strncmp.c	\
			  ft_memchr.c	\
			  ft_memcmp.c	\
			  ft_strnstr.c	\
			  ft_atoi.c	\
			  ft_substr.c	\
			  ft_strjoin.c	\
			  ft_strtrim.c	\
			  ft_split.c	\
			  ft_itoa.c	\
			  ft_strmapi.c	\
			  ft_striteri.c	\
			  ft_putchar_fd.c	\
			  ft_putstr_fd.c	\
			  ft_putendl_fd.c	\
			  ft_putnbr_fd.c

objs		= ${srcs:.c=.o}

${name}:	${objs}
				ar -rcs ${name} ${objs}

%.o:		%.c
				${cc} ${cflags} -c $< -o $@

clean:
				${rm} ${objs}

fclean:		clean
				${rm} ${name}

re:			fclean all

.PHONY:		all clean fclean re