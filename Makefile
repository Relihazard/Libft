NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
LD				= ar
LDFLAGS			= rc
INDEX			= ranlib
SRCS_DIR		= ./srcs
INCLUDES_DIR	= ./includes
OBJS_DIR 		= ./objs
LIB_DIR			= ./lib
SRCS			= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_strstr.c ft_strnstr.c ft_strcmp.c \
	ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_tolower.c ft_toupper.c
OBJS			= $(SRCS:.c=.o)
CREATED_OBJS	= $(addprefix $(OBJS_DIR)/, $(OBJS))
CREATED_LIB		= $(addprefix $(LIB_DIR)/, $(NAME))
MKDIR			= /bin/mkdir -p
RM				= /bin/rm -f
RMDIR			= /bin/rm -rf

$(NAME): all

all: welcome_msg $(CREATED_OBJS)
	@$(MKDIR) $(LIB_DIR)
	@echo "===================================================================="
	@echo "Making the library"
	@$(LD) $(LDFLAGS) $(CREATED_LIB) $(CREATED_OBJS)
	@echo "===================================================================="
	@sleep 0.1
	@echo "Done"
	@echo "===================================================================="
	@echo "Indexing the library"
	@$(INDEX) $(CREATED_LIB)
	@echo "===================================================================="
	@sleep 0.1
	@echo "Done"

welcome_msg:
	@echo "===================================================================="
	@echo "\n"
	@echo "                             LIBFT                                  "
	@echo "\n"
	@echo "===================================================================="
	@echo "This Makefile will compile all the sources files and link all the   "
	@echo "objects created to make the ft library.                             "
	@echo "===================================================================="
	@read -n 1 -s -r -p "Press any key to continue"
	@echo "\n"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(MKDIR) $(OBJS_DIR)
	@echo "===================================================================="
	@echo "Compiling $< to $@"
	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@
	@echo "===================================================================="
	@sleep 0.1
	@echo "Done"


clean:
	@echo "===================================================================="
	@echo "Cleaning the objects and removing the directory"
	@$(RM) $(CREATED_OBJS)
	@$(RMDIR) $(OBJS_DIR)
	@echo "===================================================================="
	@sleep 1
	@echo "Done"

fclean: clean
	@echo "===================================================================="
	@echo "Cleaning the library and removing the directory"
	@$(RM) $(NAME)
	@$(RMDIR) $(LIB_DIR)
	@echo "===================================================================="
	@sleep 1
	@echo "Done"

re: fclean all
