# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvan-kra <jvan-kra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 15:45:22 by jvan-kra          #+#    #+#              #
#    Updated: 2021/10/20 14:58:37 by jvan-kra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c 		\
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c		\
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnlen.c ft_islower.c\
ft_isupper.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c	\
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c		\
ft_calloc.c ft_strdup.c ft_strcpy.c ft_substr.c ft_strjoin.c	\
ft_strtrim.c ft_split.c ft_findchr.c ft_nrlen.c ft_itoa.c 		\
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c		\
ft_putendl_fd.c ft_pow.c ft_putnbr_fd.c ft_strndup.c

HEADERS = libft.h

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o} 

CC = gcc

ifdef SET_BONUS
	COMP_OBJS=${OBJS} ${BONUS_OBJS}
else
	COMP_OBJS=${OBJS}
endif

all: ${NAME}

%.o:%.c
	${CC} ${CFLAGS} -c $<

${NAME}: ${COMP_OBJS}
	${AR} rcs ${NAME} ${COMP_OBJS}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus:
	@ ${MAKE} SET_BONUS=1 all

.PHONY: all clean fclean re bonus