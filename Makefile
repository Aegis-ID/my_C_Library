##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## A Lib Makefile
##

BASE_DIR	=	./src/base/

NEW_DIR 	=	./src/new/

PRINTF_DIR 	=	./src/printf/

UNRESTRICTED_DIR	=	./src/unrestricted/

base:
	$(MAKE) -C $(BASE_DIR) all

new:	
	$(MAKE) -C $(NEW_DIR) all

printf:
	$(MAKE) -C $(PRINTF_DIR) all

unrestricted:
	$(MAKE) -C $(UNRESTRICTED_DIR) all

clean:
		$(MAKE) -C $(BASE_DIR) clean
		$(MAKE) -C $(NEW_DIR) clean
		$(MAKE) -C $(PRINTF_DIR) clean
		$(MAKE) -C $(UNRESTRICTED_DIR) clean

fclean: clean
		$(MAKE) -C $(BASE_DIR) fclean
		$(MAKE) -C $(NEW_DIR) fclean
		$(MAKE) -C $(PRINTF_DIR) fclean
		$(MAKE) -C $(UNRESTRICTED_DIR) fclean

.PHONY: base new printf unrestricted clean fclean
