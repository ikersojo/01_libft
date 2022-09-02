# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 07:55:26 by isojo-go          #+#    #+#              #
#    Updated: 2022/09/02 08:00:46 by isojo-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Key variable and files definitions:

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

AR =ar rc
RM =rm -f

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c  ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcpy.c \

		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \

SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \


# **************************************************************************** #

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

OBJ = 	$(SRC:.c=.o)

OBJ_B =	$(SRC_B:.c=.o)
bonus:		$(OBJ) $(OBJ_B)
			$(AR) $(NAME) $(OBJ) $(OBJ_B)

.c.o:		$(SRC)
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJ) $(OBJ_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus