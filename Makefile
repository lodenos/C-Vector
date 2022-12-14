CC = clang
FLAGS = -lm #-Ofast -Wall -Werror -Wextra -Weverything -Wno-padded -Wno-reserved-id-macro
INCLUDE = -I ./inc
NAME = libVector.a
OBJ = $(sort $(addsuffix .o, $(basename $(SRC))))
SRC = \
	./src/add.c \
	./src/bounding_box_inside.c \
	./src/distance.c \
	./src/divide.c \
	./src/dot_product.c \
	./src/invert.c \
	./src/multiply.c \
	./src/negate.c \
	./src/normalize.c \
	./src/rotation.c \
	./src/scale.c \
	./src/subtract.c \
	./src/to_string.c

all: $(NAME)

################################################################################
# Create lib
################################################################################
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

################################################################################
# Compiling Source
################################################################################
$(OBJ): %.o: $(basename $@)%.c
	$(CC) $(FLAGS) -c $(INCLUDE) $< -o $@

################################################################################
# Clean *.o
################################################################################
clean:
	rm -f $(OBJ)

################################################################################
# Full clean *.o & binairy
################################################################################
fclean: clean
	rm -f $(NAME)

################################################################################
# Full clean *.o & binairy & re-build
################################################################################
re: fclean all
