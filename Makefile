
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS := $(SRC:%.c=%.o)

BONUS_SRC = bonus/ft_itoa.c bonus/ft_lstadd_back.c bonus/ft_lstadd_front.c bonus/ft_lstclear.c bonus/ft_lstdelone.c bonus/ft_lstiter.c bonus/ft_lstlast.c bonus/ft_lstmap.c bonus/ft_lstnew.c bonus/ft_lstsize.c bonus/ft_putchar_fd.c bonus/ft_putendl_fd.c bonus/ft_putnbr_fd.c bonus/ft_putstr_fd.c bonus/ft_split.c bonus/ft_striteri.c bonus/ft_strjoin.c bonus/ft_strmapi.c bonus/ft_strtrim.c bonus/ft_substr.c 

BONUS_OBJS = $(BONUS_SRC:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

INC_DIR = .

CPPFLAGS = -I$(INC_DIR)

RM = rm -f

ARNAME = ar rcs $(NAME)

RANNAME = ranlib $(NAME)

OBJS_BASBO = $(OBJS) $(BONUS_OBJS)

OBJS_ALL = $(OBJS_BASBO)

all: $(NAME)

$(NAME) : $(OBJS)
	$(ARNAME) $(OBJS)
	$(RANNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS_BASBO)
	$(ARNAME) $(OBJS_BASBO)
	$(RANNAME)

everything: $(OBJS_ALL)
	$(ARNAME) $(OBJS_ALL)
	$(RANNAME)