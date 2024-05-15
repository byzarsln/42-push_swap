NAME = push_swap
NAME_BONUS = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB_PATH = lib/libft
LIB = $(LIB_PATH)/libft.a
PRINTF_PATH = lib/ft_Printf
PRINTF = $(PRINTF_PATH)/libftprintf.a
SOURCE = push_swap.c \
		control.c \
		swap_act.c\
		bigsort.c \
		ft_sort.c \
		push_act.c \
		rotate_act.c \
		rrotate_act.c \
		utils.c \
		utils2.c \
		utils3.c

SOURCE_BNS = bonus/get_action.c\
			bonus/control_bonus.c \
			bonus/push_bonus_act.c \
			bonus/push_swap_bonus.c \
			bonus/rotate_bonus_act.c \
			bonus/rrotate_bonus_act.c \
			bonus/swap_bonus_act.c \
			bonus/utils_bonus.c

OBJECT = $(SOURCE:.c=.o)
OBJECT_BNS = $(SOURCE_BNS:.c=.o)


all: $(NAME)
$(NAME): $(OBJECT) $(LIB) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJECT) $(LIB) $(PRINTF) -o $(NAME)

bonus: $(NAME_BONUS)
$(NAME_BONUS): $(OBJECT_BNS) $(LIB) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJECT_BNS) $(LIB) $(PRINTF) -o $(NAME_BONUS)

clean:
	rm -f $(OBJECT) $(OBJECT_BNS)
	make -C $(LIB_PATH) clean
	make -C $(PRINTF_PATH) clean

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)
	make -C $(LIB_PATH) fclean
	make -C $(PRINTF_PATH) fclean

re: fclean all

$(LIB):
	$(MAKE) -C $(LIB_PATH)
$(PRINTF):
	$(MAKE) -C $(PRINTF_PATH)


.PHONY: all clean fclean re bonus
