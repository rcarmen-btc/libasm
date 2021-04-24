NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_write.s

OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(NAME)

%.o: %.s
	nasm -felf64 $< 

$(NAME):
	ar rcs $(NAME) $?

