NAME = fstmem.a

FSTMEMCPY = src/fstmemcpy/fstmemcpy.c 	       \
	    src/fstmemcpy/fstmemcpy_aligned.c   \
	    src/fstmemcpy/fstmemcpy_unaligned.c  \
	    src/fstmemcpy/fstmemcpy_sse.c	  \
	    src/fstmemcpy/fstmemcpy_avx.c	   \
	    src/fstmemcpy/fstmemcpy_avx2.c

SRCS = $(FSTMEMCPY) 
OBJ = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra -Iinc -O3 -m64

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
