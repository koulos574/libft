NAME = libft.a

SRC = 	ft_split.c\
		ft_strtrim.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memccpy.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putnbr_fd.c\
		ft_strnew.c\

OBJ = 	ft_split.o\
		ft_strtrim.o\
		ft_isalnum.o\
		ft_isalpha.o\
		ft_isascii.o\
		ft_toupper.o\
		ft_tolower.o\
		ft_isdigit.o\
		ft_isprint.o\
		ft_memset.o\
		ft_bzero.o\
		ft_memccpy.o\
		ft_memcpy.o\
		ft_memmove.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_strlen.o\
		ft_strchr.o\
		ft_strrchr.o\
		ft_strncmp.o\
		ft_strlcpy.o\
		ft_strlcat.o\
		ft_strnstr.o\
		ft_atoi.o\
		ft_calloc.o\
		ft_strdup.o\
		ft_substr.o\
		ft_strjoin.o\
		ft_putchar_fd.o\
		ft_putstr_fd.o\
		ft_putendl_fd.o\
		ft_strmapi.o\
		ft_itoa.o\
		ft_putnbr_fd.o\
		ft_strnew.o\

SRC_LIST = 	ft_split.c\
		ft_strtrim.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memccpy.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putnbr_fd.c\
		ft_lstadd_back.c\
		ft_lstsize.c\
		ft_lstmap.c\
		ft_lstlast.c\
		ft_lstiter.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstadd_front.c\
		ft_lstnew.c\
		ft_strnew.c\

OBJ_LIST = 	ft_split.o\
			ft_strtrim.o\
			ft_isalnum.o\
			ft_isalpha.o\
			ft_isascii.o\
			ft_toupper.o\
			ft_tolower.o\
			ft_isdigit.o\
			ft_isprint.o\
			ft_memset.o\
			ft_bzero.o\
		ft_memccpy.o\
		ft_memcpy.o\
		ft_memmove.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_strlen.o\
		ft_strchr.o\
		ft_strrchr.o\
		ft_strncmp.o\
		ft_strlcpy.o\
		ft_strlcat.o\
		ft_strnstr.o\
		ft_atoi.o\
		ft_calloc.o\
		ft_strdup.o\
		ft_substr.o\
		ft_strjoin.o\
		ft_putchar_fd.o\
		ft_putstr_fd.o\
		ft_putendl_fd.o\
		ft_strmapi.o\
		ft_itoa.o\
		ft_putnbr_fd.o\
		ft_lstadd_back.o\
		ft_lstsize.o\
		ft_lstmap.o\
		ft_lstlast.o\
		ft_lstiter.o\
		ft_lstdelone.o\
		ft_lstclear.o\
		ft_lstadd_front.o\
		ft_lstnew.o\
		ft_strnew.o\

CC = gcc

FLAGS = -Wall -Wextra -Werror

$(NAME):

	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ_LIST)

fclean: clean
	rm -rf libft.a

re: fclean all

bonus : fclean

	$(CC) $(FLAGS) -c $(SRC_LIST)
	ar rc $(NAME) $(OBJ_LIST)
	ranlib $(NAME)

