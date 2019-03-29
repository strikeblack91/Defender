##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile 101pong
##

SRC    =	main.c									\
			init_function/*.c						\
			main_menu_function/*.c					\
			game_function/*.c						\
			is_function/*.c							\
			utils/*.c								\
			math/*.c								\
			display_help.c							\
			create_function/*.c						\
			linked_list/building_list/*.c			\
			linked_list/building_list/bullet/*.c	\
			linked_list/monster_list/*.c			\
			pause_menu_function/*.c					\
			destroy_function/*.c					\
			collision_management/*.c				\
			game_over_function/*.c					\

NAME    =    my_defender

FLAGS	=  -lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
FLAGS   +=  -I./include_defender

LIBS = -L./libmy_printf -lmy -L./libmy_getline -lgetline

all:    $(NAME)

$(NAME):
	make -C libmy_printf
	make -C libmy_getline
	gcc $(SRC) -o $(NAME) $(FLAGS) $(LIBS)

clean:
	rm -f *.o

fclean: clean
	make fclean -C libmy_printf
	make fclean -C libmy_getline
	rm -f $(NAME)

re:    fclean all