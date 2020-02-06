##
## EPITECH PROJECT, 2019
## PSU_mysh_2019
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
WARNING				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\x1b[0m"
ATTENTION			= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
ERROR				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
DONE				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"

SRC				=	my_assert/main.c


.PHONY:			 all, fclean, clean, re, library, tests_run

BIN				= 	mysh

CC				= 	@gcc

INCLUDE_DIR		=	./include

CFLAGS			=	-g -I./include/ -D_GNU_SOURCE

LDFLAGS 		= 	-lm

FLAGS			=	$(CFLAGS) -I$(INCLUDE_DIR) -lm -L./my_assert -lmy_assert


all:			library $(BIN)

library:
				@$(MAKE) -C ./my_assert/

$(BIN):			$(SRC)
				@$(CC) -o $(BIN) $(SRC) $(FLAGS) $(LDFLAGS) $(CFLAGS)
				@$(call SUCCESS, "The binary has been created correctly.")

clean:			clean_lib_obj
				@$(RM) *.vgcore
				@$(RM) *.gc*
				@$(call DONE, "[ DONE 100% ]")

clean_lib:
				@$(MAKE) clean_lib -C ./my_assert/

clean_lib_obj:
				@$(MAKE) clean -C ./my_assert/

fclean:			clean clean_lib
				@$(RM) $(BIN)
				@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:				fclean all

run:
				./$(BIN) game_map/game

valgrind:
				valgrind ./$(BIN) game_map/game

tests_run:
				gcc -o $(UT_FLAGS) $(UT_OBJ)
				./units