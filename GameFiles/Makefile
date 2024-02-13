CC = gcc
CFLAGS = -Wall -g -no-pie
OBJFILES = main.o controls.o dorf.o hoehle.o gameScreens.o gegner.o waffe.o kampfsystem.o
PROGRAM = Game

$(PROGRAM): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
main.o: main.c controls.h dorf.h hoehle.h gameScreens.h kampfsystem.h gegner.h
controls.o: controls.c controls.h
dorf.o: dorf.c dorf.h
hoehle.o: hoehle.c hoehle.h
gameScreens.o: gameScreens.c gameScreens.h
gegner.o: gegner.c gegner.h
waffe.o: waffe.c waffe.h
kampfsystem.o: kampfsystem.c kampfsystem.h gegner.h waffe.h

.PHONY: all clean run

all: clean $(PROGRAM) run

clean:
	rm -f $(OBJFILES) $(PROGRAM)

run:
	./$(PROGRAM)
