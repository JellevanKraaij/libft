NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I libft.h
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c
OBJS = ${SRCS:.c=.o}

TEST_NAME = test.out
TEST_SRCS = _test_.c
TEST_OBJS = ${TEST_SRCS:.c=.o}
GCC = gcc

all: ${NAME}

%.o:%.c
	${GCC} ${CFLAGS} ${OPTIONS} $<

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} -f ${OBJS}
fclean: clean
	${RM} -f ${NAME}
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