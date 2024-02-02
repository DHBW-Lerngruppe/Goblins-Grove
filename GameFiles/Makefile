CC = gcc
CFLAGS = -Wall
OBJFILES = Main.o UI_System.o controls.o
PROGRAM = Game

$(PROGRAM): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
Main.o: Main.c UI_System.h controls.h
UI_System.o: UI_System.c UI_System.h
controls.o: controls.c controls.h

.PHONY: all clean run

all: clean $(PROGRAM) run

clean:
	rm -f $(OBJFILES) $(PROGRAM)

run:
	./$(PROGRAM)
