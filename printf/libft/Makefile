# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 15:58:25 by jkeum             #+#    #+#              #
#    Updated: 2020/10/12 19:38:55 by jkeum            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_toupper.c ft_tolower.c \
	   ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	   ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	   ft_memset.c ft_bzero.c ft_memmove.c \
	   ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c \
	   ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
	   ft_isprint.o ft_toupper.o ft_tolower.o \
	   ft_strlen.o ft_strlcpy.o ft_strlcat.o \
	   ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strnstr.o \
	   ft_memset.o ft_bzero.o ft_memmove.o \
	   ft_memcpy.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	   ft_atoi.o ft_calloc.o ft_strdup.o \
	   ft_substr.o ft_strjoin.o ft_strtrim.o \
	   ft_split.o ft_itoa.o ft_strmapi.o \
	   ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

RM = rm -f

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)
	ranlib $@

bonus : $(NAME) $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJS)

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
