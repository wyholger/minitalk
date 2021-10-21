SRCS1		= dir_server/server.c
SRCS2		= dir_client/client.c
OBJS1		= ${SRCS1:.c=.o}
OBJS2		= ${SRCS2:.c=.o}
CC			= gcc
#AR			= ar rc
FLAGS		= -Wall -Wextra -Werror
RM			= rm -f
#HEADER		= -I minitalk.h
NAME1		= server
NAME2		= client
# LIBFT =		./libft/libft.a

#.c.o:	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
all:	$(NAME1) $(NAME2)

bonus:	all

$(NAME1):	$(OBJS1)
		make -C libft
		$(CC) $(FLAGS) -Llibft -lft $(SRCS1) -o server

$(NAME2):	$(OBJS2)
		make -C libft
		$(CC) $(FLAGS) -Llibft -lft $(SRCS2) -o client



clean:	
		${RM} ${OBJS1} ${OBJS2} 
		$(MAKE) clean -C ./libft
		${RM} serv/${NAME1}
		${RM} clien/${NAME2} 

fclean:		clean
		${RM} ${NAME2} ${NAME1}

re:		fclean all clean bonus