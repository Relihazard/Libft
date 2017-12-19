# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:51:03 by agrossma          #+#    #+#              #
#    Updated: 2017/12/19 15:46:16 by agrossma         ###   ########.fr        #
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
ECHO			:= echo
QUIET			:= @

#### End of system configuration section ####

#### Start of files definition section ####

INCLUDESDIR		:= includes
SRCDIR			:= srcs
SRCS			:= \
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
	ft_index.c \
	ft_putaddr.c \
	ft_putaddr_fd.c \
	ft_readline.c \
	ft_extcmp.c \
	ft_lstlen.c \
	ft_atoi_base.c \
	ft_swap.c \
	ft_quick_sort.c \
	ft_getopt.c
OBJDIR			:= objs
OBJS			:= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
FT_PRINTF_SRCS	:= \
	ft_printf/ft_printf.c \
	ft_printf/format.c \
	ft_printf/conv_string.c \
	ft_printf/print_padding.c \
	ft_printf/conv_tab.c \
	ft_printf/conv_wstring.c \
	ft_printf/conv_escape.c \
	ft_printf/conv_null.c \
	ft_printf/conv_pointer.c \
	ft_printf/conv_int.c \
	ft_printf/print_int_prefix.c \
	ft_printf/str_nbr_len.c \
	ft_printf/nbr_len.c \
	ft_printf/print_unsigned_int.c \
	ft_printf/ft_putwchar.c \
	ft_printf/conv_char.c \
	ft_printf/conv_wchar.c \
	ft_printf/conv_long.c \
	ft_printf/unsigned_length.c \
	ft_printf/conv_octal.c \
	ft_printf/conv_unsigned.c \
	ft_printf/conv_hex.c
FT_PRINTF_OBJS	:= $(addprefix $(OBJDIR)/, $(notdir $(FT_PRINTF_SRCS:.c=.o)))

#### End of files definition section ####

#### Start of rules section ####

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS) $(FT_PRINTF_OBJS)
	$(QUIET)$(ECHO) "Linking the library"
	$(QUIET)$(AR) $(ARFLAGS) $@ $(OBJS) $(FT_PRINTF_OBJS)
	$(QUIET)$(ECHO) "Indexing the library"
	$(QUIET)$(RANLIB) $@
	$(QUIET)$(ECHO) "Done."

$(OBJDIR):
	$(QUIET)$(MKDIR) $(MKDIRFLAGS) $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(QUIET)$(ECHO) "Compiling $<"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/ft_printf/%.c
	$(QUIET)$(ECHO) "Compiling $<"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

clean:
	$(QUIET)$(ECHO) "Cleaning the objects"
	$(QUIET)$(RM) $(RMFLAGS) $(OBJS) $(FT_PRINTF_OBJS) $(OBJDIR)

fclean: clean
	$(QUIET)$(ECHO) "Deleting the library"
	$(QUIET)$(RM) $(RMFLAGS) $(NAME)

re: fclean all

#### End of rules section ####
