NAME	=	a.out
CC		=	c++
FLAG	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
SRC		=	main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			Character.cpp \
			MateriaSource.cpp 
			

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

re		:	fclean all

.PHONY	:	all re clean fclean