NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I libft.h
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c 		\
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c		\
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnlen.c ft_islower.c\
ft_isupper.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c	\
ft_strncmp.c ft_memchr.c ft_memcmp.c
OBJS = ${SRCS:.c=.o}

TEST_NAME = test.out
TEST_SRCS = test_program.c
TEST_OBJS = ${TEST_SRCS:.c=.o}
GCC = gcc

all: ${NAME}

%.o:%.c
	${GCC} ${CFLAGS} ${OPTIONS} $<

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all

${TEST_NAME}: ${NAME} ${TEST_OBJS}
	${GCC} ${TEST_OBJS} ${NAME} -o ${TEST_NAME}

test: ${TEST_NAME} 

runtest: test
	./${TEST_NAME}

retest: re fcleantest test

fcleantest:
	${RM} -f ${TEST_OBJS} ${TEST_NAME}

.PHONY: all clean fclean re runtest retest fcleantest