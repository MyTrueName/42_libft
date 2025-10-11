COMPILER = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = libft.h
FUNCTIONS = isalpha isdigit isalnum isascii \
		   	isprint strlen  memset  bzero \
			memcpy
SOURCE_FILES = $(addprefix ft_,$(addsuffix .c,$(FUNCTIONS)))
OBJECT_FILES = $(addprefix ft_,$(addsuffix .o,$(FUNCTIONS)))

all: $(NAME)

$(NAME): $(OBJECT_FILES) $(HEADER)
	ar rsc $(NAME) $(OBJECT_FILES) $(HEADER)

$(OBJECT_FILES): $(SOURCE_FILES)
	$(COMPILER) $(FLAGS) -c $(SOURCE_FILES)

clean:
	rm -f *.o;

fclean: clean
	rm -f $(NAME);

re: fclean all

bonus:

.PHONY: clean fclean
