# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:51:03 by agrossma          #+#    #+#              #
#    Updated: 2018/01/12 16:14:52 by relihazar        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL			:= /bin/bash

#### Start of system configuration section ####

NAME			:= libft.a
CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
AR				:= ar
ARFLAGS			:= rc
RANLIB			:= ranlib
MKDIR			:= mkdir
MKDIRFLAGS		:= -p
RM				:= /bin/rm
RMFLAGS			:= -rf
RMDIR			:= rmdir
ECHO			:= echo
QUIET			:= @

#### End of system configuration section ####

#### Start of files definition section ####

INCLUDESDIR		:= includes/
OBJSDIR			:= objs/
SRCSDIR			:= srcs/
MEMORY_SRCSDIR	:= memory/
MEMORY_SRCS		:= \
	ft_bzero.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c
OBJS			+= $(addprefix $(OBJSDIR), $(MEMORY_SRCS:.c=.o))
FT_PRINTF_SRCSDIR	:= ft_printf/
FT_PRINTF_SRCS	:= \
	ft_printf.c \
	format.c \
	conv_string.c \
	print_padding.c \
	conv_tab.c \
	conv_wstring.c \
	conv_escape.c \
	conv_null.c \
	conv_pointer.c \
	conv_int.c \
	print_int_prefix.c \
	str_nbr_len.c \
	nbr_len.c \
	print_unsigned_int.c \
	ft_putwchar.c \
	conv_char.c \
	conv_wchar.c \
	conv_long.c \
	unsigned_length.c \
	conv_octal.c \
	conv_unsigned.c \
	conv_hex.c
OBJS			+= $(addprefix $(OBJSDIR), $(FT_PRINTF_SRCS:.c=.o))
LIST_SRCSDIR	:= list/
LIST_SRCS		:= \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c
OBJS			+= $(addprefix $(OBJSDIR), $(LIST_SRCS:.c=.o))
PRINT_SRCSDIR	:= print/
PRINT_SRCS		:= \
	ft_putaddr.c \
	ft_putaddr_fd.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c
OBJS			+= $(addprefix $(OBJSDIR), $(PRINT_SRCS:.c=.o))
STRING_SRCSDIR	:= string/
STRING_SRCS		:= \
	ft_atoi.c \
	ft_atoi_base.c \
	ft_extcmp.c \
	ft_getopt.c \
	ft_index.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_itoa.c \
	ft_readline.c \
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
	ft_toupper.c
OBJS			+= $(addprefix $(OBJSDIR), $(STRING_SRCS:.c=.o))

#### End of files definition section ####

#### Start of rules section ####

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJSDIR) $(OBJS)
	$(QUIET)$(ECHO) "AR	$@"
	$(QUIET)$(AR) $(ARFLAGS) $@ $(OBJS)
	$(QUIET)$(ECHO) "RANLIB	$@"
	$(QUIET)$(RANLIB) $@

$(OBJSDIR):
	$(QUIET)$(MKDIR) $(MKDIRFLAGS) $(OBJSDIR)

$(OBJSDIR)%.o: $(SRCSDIR)$(MEMORY_SRCSDIR)%.c
	$(QUIET)$(ECHO) "CC	$(MEMORY_SRCSDIR)$(notdir $@)"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

$(OBJSDIR)%.o: $(SRCSDIR)$(FT_PRINTF_SRCSDIR)%.c
	$(QUIET)$(ECHO) "CC	$(FT_PRINTF_SRCSDIR)$(notdir $@)"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

$(OBJSDIR)%.o: $(SRCSDIR)$(LIST_SRCSDIR)%.c
	$(QUIET)$(ECHO) "CC	$(LIST_SRCSDIR)$(notdir $@)"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

$(OBJSDIR)%.o: $(SRCSDIR)$(PRINT_SRCSDIR)%.c
	$(QUIET)$(ECHO) "CC	$(PRINT_SRCSDIR)$(notdir $@)"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

$(OBJSDIR)%.o: $(SRCSDIR)$(STRING_SRCSDIR)%.c
	$(QUIET)$(ECHO) "CC	$(STRING_SRCSDIR)$(notdir $@)"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

clean:
	$(QUIET)$(ECHO) "RM	$(OBJSDIR)"
	$(QUIET)$(RM) $(RMFLAGS) $(OBJS)
	$(QUIET)if [ -d "$(OBJSDIR)" ]; then \
		$(RMDIR) $(OBJSDIR); \
	fi

fclean: clean
	$(QUIET)$(ECHO) "RM	$(NAME)"
	$(QUIET)$(RM) $(RMFLAGS) $(NAME)

re: fclean all

#### End of rules section ####
