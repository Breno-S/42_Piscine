SRC_DIR=./src
INC_DIR=./include

NAME=$(SRC_DIR)/rush-02

SRC_FILES =$(SRC_DIR)/ft_strncmp.c \
            $(SRC_DIR)/ft_exec.c \
            $(SRC_DIR)/ft_putstr.c \
            $(SRC_DIR)/file_funcs.c \
            $(SRC_DIR)/ft_strlen.c \
            $(SRC_DIR)/ft_search_any_number.c \
            $(SRC_DIR)/main.c \
            $(SRC_DIR)/ft_atoi.c \
            $(SRC_DIR)/ft_strstr.c \
			$(SRC_DIR)/ft_search_n_digits.c \
            $(SRC_DIR)/ft_search_group.c

HEADER_FILES =$(INC_DIR)/string_funcs.h \
               $(INC_DIR)/file_funcs.h \
               $(INC_DIR)/key_value.h

CFLAGS=-Wall -Wextra -Werror

OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
