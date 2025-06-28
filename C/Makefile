
SULLY_NAME = Sully
GRACE_NAME = Grace
COLLEEN_NAME = Colleen

CC = cc

CC_FLAGS = -Wall -Wextra -Werror -g3

SULLY_OBJ = $(SULLY_SRC:.c=.o)
GRACE_OBJ = $(GRACE_SRC:.c=.o)
COLLEEN_OBJ = $(COLLEEN_SRC:.c=.o)

SULLY_SRC = ./Sully.c
GRACE_SRC = ./Grace.c
COLLEEN_SRC = ./Colleen.c

all: sully grace colleen

sully: $(SULLY_NAME)

grace: $(GRACE_NAME)

colleen: $(COLLEEN_NAME)

$(SULLY_NAME): $(SULLY_OBJ) 
	$(CC) $(CC_FLAGS) $(SULLY_OBJ) -o $(SULLY_NAME)

$(GRACE_NAME): $(GRACE_OBJ)
	$(CC) $(CC_FLAGS) $(GRACE_OBJ) -o $(GRACE_NAME)

$(COLLEEN_NAME): $(COLLEEN_OBJ)
	$(CC) $(CC_FLAGS) $(COLLEEN_OBJ) -o $(COLLEEN_NAME)

%.o: %.c
	$(CC) $(CC_FLAGS) -I. -O3 -c $< -o $@

clean:
	rm -rf $(SULLY_OBJ)
	rm -rf $(GRACE_OBJ)
	rm -rf $(COLLEEN_OBJ)

fclean: clean
	rm -rf $(SULLY_NAME)
	rm -rf $(GRACE_NAME)
	rm -rf $(COLLEEN_NAME)

re: fclean all

.PHONY: all clean fclean re sully grace collen