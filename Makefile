# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asodor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 22:35:33 by asodor            #+#    #+#              #
#    Updated: 2023/11/24 14:51:42 by asodor           ###   ########.fr        #
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

BONUS_SRCS	=	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\

NAME	= libft.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

OBJS	= ${SRCS:.c=.o}

BONUS_OBJS	= ${BONUS_SRCS:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

bonus:		${BONUS_OBJS}

${BONUS_OBJS}:	${BONUS_SRCS}
			${CC} ${CFLAGS} -c $^
			ar rcs ${NAME} ${BONUS_OBJS}
clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
