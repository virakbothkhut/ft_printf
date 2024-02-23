CC = cc 
# Compiler flags 
CFLAGS = -Wall - Waxtra -Werror 

# Source files 
SRCS = $(wildcard *.c)

# Objects files
OBJS = $(SRCS:.c= .0)

# Name
NAME = ft_printf
LIB	= ar rcs
RM = rm -f

all: $(NAME)