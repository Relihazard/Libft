SHELL		:= /bin/bash

#### Start of system configuration section ####

# TODO: change prefix and exec_prefix to the installation dir
# TODO: add QUIET variable
NAME		:= libft
CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
AR			:= ar
ARFLAGS		:= rc
RANLIB		:= ranlib
QUIET		:= @

#### End of system configuration section ####

#### Start of files definition section ####

SRCS		:= ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_strdup.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_itoa.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putendl.c \
	ft_putnbr.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_isspace.c
OBJS		:= $(SRCS:.c=.o)

#### End of files definition section ####

#### Start of rules section ####

.PHONY: $(NAME)
$(NAME): all

.PHONY: all
all: $(OBJS)
	$(AR) $(ARFLAGS) $(NAME).a $(OBJS)
	$(RANLIB) $(NAME).a


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME).a

.PHONY: re
re: fclean all

#### End of rules section ####
