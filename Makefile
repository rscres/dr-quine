NAME = dr-quine
SULLY_NAME = Sully
GRACE_NAME = Grace
COLLEEN_NAME = Colleen

CC = cc

CC_FLAGS = -Wall -Wextra -Werror -g3

SULLY_OBJ = $(SULLY_SRC:.c=.o)
GRACE_OBJ = $(GRACE_SRC:.c=.o)
COLLEEN_OBJ = $(COLLEEN_SRC:.c=.o)

SULLY_SRC = ./C/Sully.c
GRACE_SRC = ./C/Grace.c
COLLEEN_SRC = ./C/Colleen.c

all: $(NAME)

$(NAME): $(SULLY_NAME) $(GRACE_NAME) $(COLLEEN_NAME)

bonus: $(PRINTF) $(LIBFT) $(B_SERVER_NAME) $(B_CLIENT_NAME)

$(SULLY_NAME): $(SULLY_OBJ) 
	$(CC) $(CC_FLAGS) $(SULLY_OBJ) $(LIBS) -o $(SULLY_NAME)

$(GRACE_NAME): $(GRACE_OBJ)
	$(CC) $(CC_FLAGS) $(GRACE_OBJ) $(LIBS) -o $(GRACE_NAME)

$(COLLEEN_NAME): $(COLLEEN_OBJ)
	$(CC) $(CC_FLAGS) $(COLLEEN_OBJ) $(LIBS) -o $(COLLEEN_NAME)


%.o: %.c
	$(CC) $(CC_FLAGS) -I. -I./includes/ -O3 -c $< -o $@

clean:
	rm -rf $(SULLY_OBJ)
	rm -rf $(GRACE_OBJ)
	rm -rf $(COLLEEN_OBJ)

fclean: clean
	rm -rf $(SULLY_NAME)
	rm -rf $(GRACE_NAME)
	rm -rf $(COLLEEN_NAME)

re: fclean all

.PHONY: all clean fclean re bonus