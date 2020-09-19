NAME = push_swap
NAME_C = checker
FILE_C = checker
FILE_PW = pushswap
COM = gcc
HEAD_PW = ./includes/
HEAD_L = ./libft/
HEAD_LIB = libft.h
HEAD_H = push_swap.h
HEAD_F = $(HEAD_PW) \
		$(HEAD_L)
HEADS = $(addprefix -I, $(HEAD_F))
LIB_F = ./libft/
LIB = libft.a
LIB_D = $(addprefix $(LIB_F), $(LIB))
LIB_C = -L $(LIB_F) -lft
SOUS = ./srcs/
SOUS_FIL1 = algoritm.c \
		   support.c \
		   support2.c \
		   checker.c \
		   ft_command.c \
		   ft_sotr.c \
		   support3.c \
			ft_ps.c \
			ft_checker.c \
		   use_command.c
SOUS_FIL2 = algoritm.c \
		   support.c \
		   support2.c \
		   ft_command.c \
		   ft_sotr.c \
		   push_swap.c \
			ft_ps.c \
		   support3.c \
			ft_checker.c \
		   use_command.c
OBJS1 = $(SOUS_FIL1:.c=.o)
OBJS2 = $(SOUS_FIL2:.c=.o)
SOUS_F1 = $(addprefix $(SOUS), $(SOUS_FIL1))
SOUS_F2 = $(addprefix $(SOUS), $(SOUS_FIL2))
OBJS_F1 = $(addprefix $(BIN), $(OBJS1))
OBJS_F2 = $(addprefix $(BIN), $(OBJS2))
TRASH = push_swap.dSYM
BIN = ./bin/
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

.PHONY: all clean re

all: $(NAME) $(NAME_C)
$(NAME): $(OBJS_F2) $(HEAD_PW)$(HEAD_H) $(LIB_D)
	$(COM) $(FLAGS) -o $@ $(OBJS_F2) $(HEADS) $(LIB_C)
$(NAME_C): $(OBJS_F1) $(HEAD_PW)$(HEAD_H) $(LIB_D)
	$(COM) $(FLAGS) -o $@ $(OBJS_F1) $(HEADS) $(LIB_C)
$(LIB_D): $(LIB_F)
	$(MAKE) -sC $(LIB_F) all
$(BIN)%.o: $(SOUS)%.c
	mkdir -p $(BIN) && \
	$(COM) $(FLAGS) -c $< -o $@ $(HEADS)
clean:
	@$(REMOVE) $(OBJS_F1) $(BIN) $(TRASH)
	@$(REMOVE) $(OBJS_F2) $(BIN) $(TRASH)
	@make -sC $(LIB_F) clean
fclean: clean
	@$(REMOVE) $(NAME)
	@$(REMOVE) $(NAME_C)
	@make -sC $(LIB_F) fclean
re: fclean all
