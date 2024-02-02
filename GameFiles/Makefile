CC = gcc
CFLAGS = -Wall
OBJFILES = main.o UI_System.o controls.o dorf.o
PROGRAM = Game

$(PROGRAM): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
main.o: main.c UI_System.h controls.h dorf.h
UI_System.o: UI_System.c UI_System.h
controls.o: controls.c controls.h
dorf.o: dorf.h

.PHONY: all clean run

all: clean $(PROGRAM) run

clean:
	rm -f $(OBJFILES) $(PROGRAM)

run:
	./$(PROGRAM)
