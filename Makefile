# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asodor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 22:35:33 by asodor            #+#    #+#              #
#    Updated: 2023/11/14 23:07:26 by asodor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_putnbr_fd.c\
			ft_putendl_fd.c\
			ft_putstr_fd.c\
			ft_putchar_fd.c\
			ft_striteri.c\
			ft_strmapi.c\
			ft_itoa.c\
			ft_split.c\
			ft_strtrim.c\
			ft_strjoin.c\
			ft_substr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_bzero.c\
			ft_atoi.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strlcpy.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strncmp.c\
			ft_strlen.c\
			ft_strchr.c\
			ft_memset.c\
			ft_isprint.c\
			ft_isdigit.c\
			ft_isascii.c\
			ft_isalpha.c\
			ft_isalnum.c\


SRCS_BONUS	=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

%.o : %.c
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJS_BONUS}
			ar rcs ${NAME} ${OBJS_BONUS}

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME} ${OBJS_BONUS}

re:			fclean all
