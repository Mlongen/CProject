
NAME = libvc.a

SRC = vc_atoi.c \
	  vc_isalpha.c\
	  vc_isdigit.c \
	  vc_isalnum.c\
	  vc_isascii.c\
	  vc_isprint.c\
	  vc_toupper.c\
	  vc_tolower.c\
	  vc_memset.c\
	  vc_bzero.c\
	  vc_memcpy.c\
	  vc_memccpy.c\
	  vc_memmove.c\
	  vc_memchr.c\
	  vc_memcmp.c\
	  vc_strlen.c\
	  vc_strdup.c\
	  vc_strcpy.c\
	  vc_strncpy.c\
	  vc_strcat.c\
	  vc_strncat.c\
	  vc_strlcat.c\
	  vc_strchr.c\
	  vc_strrchr.c\
	  vc_strstr.c\
	  vc_strnstr.c\
	  vc_strcmp.c\
	  vc_strncmp.c\
	  vc_putstr.c\
	  vc_memalloc.c\
	  vc_memdel.c\
	  vc_strnew.c\
	  vc_strdel.c\
	  vc_strclr.c\
	  vc_striter.c\
	  vc_strmap.c\
	  vc_strsub.c\
	  vc_strjoin.c\
	  vc_strtrim.c\
	  vc_strsplit.c\
	  vc_itoa.c\
	  vc_putnbr.c\
	  vc_putchar.c\
	  vc_putendl.c\



HEADER = -I libvc.h -I

OBJECTS = vc_atoi.o\
	  vc_isalpha.o\
	  vc_isdigit.o\
	  vc_isalnum.o\
	  vc_isascii.o\
	  vc_isprint.o\
	  vc_toupper.o\
	  vc_tolower.o\
	  vc_memset.o\
	  vc_bzero.o\
	  vc_memcpy.o\
	  vc_memccpy.o\
	  vc_memmove.o\
	  vc_memchr.o\
	  vc_memcmp.o\
	  vc_strlen.o\
	  vc_strdup.o\
	  vc_strcpy.o\
	  vc_strncpy.o\
	  vc_strcat.o\
	  vc_strncat.o\
	  vc_strlcat.o\
	  vc_strchr.o\
	  vc_strrchr.o\
	  vc_strstr.o\
	  vc_strnstr.o\
	  vc_strcmp.o\
	  vc_strncmp.o\
	  vc_putstr.o\
	  vc_memalloc.o\
	  vc_memdel.o\
	  vc_strnew.o\
	  vc_strdel.o\
	  vc_strclr.o\
	  vc_striter.o\
	  vc_strmap.o\
	  vc_strsub.o\
	  vc_strjoin.o\
	  vc_strtrim.o\
	  vc_strsplit.o\
	  vc_itoa.o\
	  vc_putnbr.o\
	  vc_putchar.o\
	  vc_putendl.o\


all: $(NAME)

$(NAME):
	gcc $(HEADER) -c $(SRC) -Wall -Wextra -Werror
	ar rc $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all