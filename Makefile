NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
AR = ar rc
RANLIB = ranlib
SRCS_DIR = ./src
INCLUDES_DIR = ./includes
OBJS_DIR = ./obj
SRCS = $(SRCS_DIR)/ft_strlen.c
OBJS = $(OBJS_DIR)/$(notdir $(SRCS:.c=.o))
INCLUDES = -I $(INCLUDES_DIR)
MKDIR = /bin/mkdir -p
RM = /bin/rm -f
RMF = /bin/rm -rf

$(NAME): all

all: $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(MKDIR) $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


clean:
	$(RM) $(OBJS)
	$(RMF) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
