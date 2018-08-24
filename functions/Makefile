
NAME = libvc.a

SRC = ./vc_atoi.c \
	  ./vc_isalpha.c\
	  ./vc_isdigit.c \
	  ./vc_isalnum.c\
	  ./vc_isascii.c\
	  ./vc_isprint.c\
	  ./vc_toupper.c\
	  ./vc_tolower.c\
	  ./vc_memset.c\
	  ./vc_bzero.c\
	  ./vc_memcpy.c\
	  ./vc_memccpy.c\
	  ./vc_memmove.c\
	  ./vc_memchr.c\
	  ./vc_memcmp.c\
	  ./vc_strlen.c\
	  ./vc_strdup.c\
	  ./vc_strcpy.c\
	  ./vc_strncpy.c\
	  ./vc_strcat.c\
	  ./vc_strncat.c\
	  ./vc_strlcat.c\
	  ./vc_strchr.c\
	  ./vc_strrchr.c\
	  ./vc_strstr.c\
	  ./vc_strnstr.c\
	  ./vc_strcmp.c\
	  ./vc_strncmp.c\
	  ./vc_putstr.c\
	  ./vc_memalloc.c\
	  ./vc_memdel.c\
	  ./vc_strnew.c\
	  ./vc_strdel.c\
	  ./vc_strclr.c\
	  ./vc_striter.c\
	  ./vc_strmap.c\
	  ./vc_strsub.c\
	  ./vc_strjoin.c\
	  ./vc_strtrim.c\
	  ./vc_strsplit.c\
	  ./vc_itoa.c\
	  ./vc_putnbr.c\
	  ./vc_putchar.c\
	  ./vc_putendl.c\





OBJS = $(SRC:.c=.o)

HDRS = libvc.h

all: $(NAME)

$(NAME):
	gcc -c  -I $(HDRS) $(SRC) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all