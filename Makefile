SRCS			=	check_inputs.c error_check.c ft_atoi.c ft_split.c push_funcs.c push_swap.c \
					reverse_rotate_funcs.c rotate_funcs.c sort_utils.c sort.c split_check.c \
					swap_funcs.c

OBJS			=	$(SRCS:.c=.o)

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:			
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re