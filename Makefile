FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = conversions.c conversions2.c ft_isdigit.c ft_itoa.c ft_memcpy.c ft_printf.c ft_strdup.c \
ft_strjoin.c ft_strlen.c ft_unsigned_itoa.c init_tab.c parse_functions.c precision_functions.c \
print_util.c width_functions.c ft_strncmp.c ft_strlcat.c ft_substr.c ft_malloc.c
INCLUDES_DIR = ./
INCLUDES = ft_printf.h
OPTIONS = -I ${INCLUDES}
OBJS = ${SRCS:.c=.o}

.c.o:		${SRCS} ${INCLUDES}
	cc $(FLAGS) -I ${INCLUDES_DIR} -c $^ -o ${<:.c=.o}

$(NAME):	${OBJS} ${INCLUDES}
	ar rcs $@ $^

all:		$(NAME)

clean :
	rm -f $(OBJS)

fclean :	clean
	rm -f $(NAME)

re:			fclean all

