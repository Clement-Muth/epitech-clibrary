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

SRC				=	main.c


.PHONY:			 all, fclean, clean, re, library

BIN				= 	mysh

CC				= 	gcc

INCLUDE_DIR		=	./include

CFLAGS			=	-I./include/

LDFLAGS 		= 	-lmy_linked -Llib

FLAGS			=	$(CFLAGS) -I$(INCLUDE_DIR)

DFLAG			=	-W -Wall -Werror -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point

all:			library $(BIN)

debug:			$(SRC)
				@$(CC) -o $(BIN) $(SRC) $(FLAGS) $(LDFLAGS) $(CFLAGS) $(DEBUG) -DDEBUG

library:
				@$(MAKE) -C ./lib/my_linked/

$(BIN):			$(SRC)
				@$(CC) -o $(BIN) $(SRC) -g $(FLAGS) $(LDFLAGS) $(CFLAGS)
				@$(call SUCCESS, "The binary has been created correctly.")

clean:			clean_lib_obj
				@$(RM) *.vgcore
				@$(RM) *.gc*
				@$(call DONE, "[ DONE 100% ]")

clean_lib:
				@$(MAKE) clean_lib -C ./lib/my_linked/

clean_lib_obj:
				@$(MAKE) clean -C ./lib/my_linked/

fclean:			clean clean_lib
				@$(RM) $(BIN)
				@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:				fclean all

run:
				./$(BIN)

valgrind:
				valgrind ./$(BIN)