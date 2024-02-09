CC = gcc
CFLAGS = -Wall
OBJFILES = main.o UI_System.o controls.o dorf.o höhle.o menu.o
PROGRAM = Game

$(PROGRAM): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
main.o: main.c UI_System.h controls.h dorf.h höhle.h menu.h
UI_System.o: UI_System.c UI_System.h
controls.o: controls.c controls.h
dorf.o: dorf.h
höhle.o: höhle.h
menu.o: menu.h

.PHONY: all clean run

all: clean $(PROGRAM) run

clean:
	rm -f $(OBJFILES) $(PROGRAM)

run:
	./$(PROGRAM)
