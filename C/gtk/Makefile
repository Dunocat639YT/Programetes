# Nom de l'executable final (posa-li el que vulguis, xato)
TARGET = main

# El compilador que mana
CC = gcc

# Les "flags" de GTK 4 (Headers i warnings per si fas alguna marranada al codi)
CFLAGS = $(shell pkg-config --cflags gtk4) -Wall -Wextra -Werror

# Les llibreries que necessitem per l'enllaçat
LIBS = $(shell pkg-config --libs gtk4)

# Busquem tots els fitxers .c de la carpeta (per si en tens més d'un)
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Regla principal: compilar el target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

# Com compilem cada fitxer .c en un .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Per si vols fer neteja (make clean)
clean:
	rm -f $(TARGET) $(OBJ)

# Per si vols executar-ho directament
run: all
	./$(TARGET)