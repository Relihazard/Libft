SHELL		:= /bin/bash

#### Start of system configuration section ####

NAME		:= libft
prefix		:= .
exec_prefix	:= $(prefix)
srcdir		:= $(exec_prefix)/src
includedir	:= $(exec_prefix)/include
objdir		:= $(exec_prefix)/obj
libdir		:= $(exec_prefix)/lib
CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
AR			:= ar
ARFLAGS		:= rc
RANLIB		:= ranlib

#### End of system configuration section ####

#### Start of sources and objects definition section ####

SRCS_C		:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_strstr.c ft_strnstr.c ft_strcmp.c \
	ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_tolower.c ft_toupper.c ft_memalloc.c ft_memdel.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c \
	ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	ft_lstmap.c ft_isspace.c
SRCS		:= $(addprefix $(srcdir)/, $(SRCS_C))
OBJS		:= $(addprefix $(objdir)/, $(notdir $(SRCS:.c=.o)))
LIB			:= $(libdir)/$(NAME).a

#### End of sources and objects definition section ####

#### Start of rules section ####

.PHONY: $(NAME)
$(NAME): all

.PHONY: all
all: makedir $(OBJS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJS)
	$(RANLIB) $(LIB)

.PHONY: makedir
makedir:
	@mkdir -p $(objdir)
	@mkdir -p $(libdir)

$(objdir)/%.o: $(srcdir)/%.c
	$(CC) $(CFLAGS) -I$(includedir) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(objdir)

.PHONY: fclean
fclean: clean
	rm -rf $(libdir)

.PHONY: re
re: fclean all

#### End of rules section ####
