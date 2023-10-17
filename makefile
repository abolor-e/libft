cc			= gcc

cflags		= -Wall -Wextra -Werror

rm			= rm -f

name		= libft.a

all:		${name}

srcs		= ft_atoi.c

objs		= ${srcs:.c=.o}

${name}:	${objs}
		${cc} ${cflags} -o ${name} ${srcs}

clean:
		${rm} ${objs}

fclean:		clean
		${rm} ${name}

re:			fclean all

.PHONY:		all fclean clean re

