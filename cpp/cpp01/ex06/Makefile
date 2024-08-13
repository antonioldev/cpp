NAME	=	harlFilter
CC		=	c++
FLAG	=	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp Harl.cpp
OBJ		=	$(SRC:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o		:	%.cpp
			$(CC) $(FLAG) -c $< -o $@

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean re

.PHONY	:	all clean fclean re