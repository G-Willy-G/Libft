PROJECT = libft
NAME = libft.a

CC = gcc # Compilador a usar
CFLAGS = -Wall -Wextra -Werror # Flags de Compilación
DELETE = rm -rf # Elimina todas las carpetas de forma recursiva y forzada
ARCHIVER = ar rcs #ar (archiver), r (remplaza archivos existentes en la libreria), c (crea la libreria si no existe), (crea un íntide, tabla de simbolos, para que funcione mas rapido)

SRCS = ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_strlen.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_strnstr.c \
        ft_strncmp.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_atoi.c \
        ft_calloc.c \
        ft_strdup.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_split.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_lstnew.c \
        ft_lstadd_front.c \
        ft_lstsize.c \
        ft_lstlast.c \
        ft_lstadd_back.c \
        ft_lstdelone.c \
        ft_lstclear.c \
        ft_lstiter.c \
        ft_lstmap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

# Crea la Libreria, objetivo libft.a dependencia $OBJS. Necesita todos los .o listados en la variables.
$(NAME): $(OBJS)
        $(AR) $(NAME) $(OBJS)

%.o: %.c # Regla de Compilacion, si en el anterior paso faltaba algun objeto
        $(CC) $(CFLAGS) -c $< -o $@ # $< busca primera depedencia, $@ target de la regla, en su caso el objeto. -C solo compila, -O nombre output 

# Limpieza
clean:
        $(DELETE) $(OBJS) #Borra los objetos creados.

#Reconstrucción
ft_clean: clean #Primero ejecuta clean
        $(RM) $(NAME) # Borra libft.a, deja todo limpio

re: fclean all #ejecuta ft_clean y all (vuelve a compilar)

.PHONY: all clean fclean re # Aclara que todo eso son nombres de acciones, no archivos