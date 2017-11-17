# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:51:03 by agrossma          #+#    #+#              #
#    Updated: 2017/11/17 11:40:07 by agrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		:= /bin/bash

#### Start of system configuration section ####

NAME		:= libft.a
CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
AR			:= ar
ARFLAGS		:= rc
RANLIB		:= ranlib
RM			:= /bin/rm
RMFLAGS		:= -rf
ECHO		:= echo
QUIET		:= @

#### End of system configuration section ####

#### Start of files definition section ####

SRCS		:= \
	ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_itoa.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnlen.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_abs.c \
	ft_index.c
OBJS		:= $(SRCS:.c=.o)

#### End of files definition section ####

#### Start of rules section ####

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(QUIET)$(ECHO) "Linking the library"
	$(QUIET)$(AR) $(ARFLAGS) $@ $^
	$(QUIET)$(ECHO) "Indexing the library"
	$(QUIET)$(RANLIB) $@
	$(QUIET)$(ECHO) "Done."

%.o: %.c
	$(QUIET)$(ECHO) "Compiling $<"
	$(QUIET)$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(QUIET)$(ECHO) "Cleaning the objects"
	$(QUIET)$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(QUIET)$(ECHO) "Deleting the library"
	$(QUIET)$(RM) $(RMFLAGS) $(NAME)

re: fclean all

#### End of rules section ####
