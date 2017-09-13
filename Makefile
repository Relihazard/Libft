NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
AR = ar rc
RANLIB = ranlib
SRCS_DIR = ./src
INCLUDES_DIR = ./includes
OBJS_DIR = ./obj
SRCS = $(SRCS_DIR)/ft_memeset.c $(SRCS_DIR)/ft_bzero.c $(SRCS_DIR)/ft_memcpy.c \
	$(SRCS_DIR)/ft_memccpy.c $(SRCS_DIR)/ft_memmove.c $(SRCS_DIR)/ft_memchr.c \
	$(SRCS_DIR)/ft_memcmp.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strdup.c \
	$(SRCS_DIR)/ft_strcpy.c $(SRCS_DIR)/ft_strncpy.c $(SRCS_DIR)/ft_strcat.c \
	$(SRCS_DIR)/ft_strncat.c $(SRCS_DIR)/ft_strlcat.c $(SRCS_DIR)/ft_strstr.c \
	$(SRCS_DIR)/ft_strnstr.c $(SRCS_DIR)/ft_strcmp.c $(SRCS_DIR)/ft_strncmp.c \
	$(SRCS_DIR)/ft_atoi.c $(SRCS_DIR)/ft_isalpha.c $(SRCS_DIR)/ft_isdigit.c \
	$(SRCS_DIR)/ft_isalnum.c $(SRCS_DIR)/ft_isascii.c $(SRCS_DIR)/ft_isprint.c \
	$(SRCS_DIR)/ft_tolower.c $(SRCS_DIR)/ft_toupper.c
OBJS = $(OBJS_DIR)/$(notdir $(SRCS:.c=.o))
MKDIR = /bin/mkdir -p
RM = /bin/rm -f
RMF = /bin/rm -rf

$(NAME): all

all: $(OBJS)
	@echo "===================================================================="
	@echo "Making the libft"
	@echo "===================================================================="
	@$(AR) $(NAME) $(OBJS)
	@echo "Done"
	@echo "===================================================================="
	@echo "Indexing the library"
	@echo "===================================================================="
	@$(RANLIB) $(NAME)
	@echo "Done"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(MKDIR) $(OBJS_DIR)
	@echo "===================================================================="
	@echo "Compiling $< to $@"
	@echo "===================================================================="
	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@
	@echo "Done"


clean:
	@echo "===================================================================="
	@echo "Cleaning the objects and the directory"
	@echo "===================================================================="
	@$(RM) $(OBJS)
	@$(RMF) $(OBJS_DIR)
	@echo "Done"

fclean: clean
	@echo "===================================================================="
	@echo "Cleaning the binary"
	@echo "===================================================================="
	@$(RM) $(NAME)
	@echo "Done"

re: fclean all
