NAME = libasm.a

SRC = ft_strlen.s ft_strcpy.s ft_write.s ft_read.s ft_strcmp.s ft_strdup.s

OBJ = $(patsubst %.s, %.o, $(SRC))

%.o: %.s
	nasm -felf64 $< 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
