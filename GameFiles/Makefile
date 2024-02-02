CC = gcc
CFLAGS = -Wall
OBJFILES = Main.o UI_System.o kampfsystem.o gegner.o
PROGRAM = Game

$(PROGRAM): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
Main.o: Main.c UI_System.h kampfsystem.h gegner.h
UI_System.o: UI_System.c UI_System.h
kampfsystem.o: kampfsystem.c kampfsystem.h gegner.h
gegner.o:gegner.c gegner.h

.PHONY: all clean run

all: clean $(PROGRAM) run

clean:
	rm -f $(OBJFILES) $(PROGRAM)

run:
	./$(PROGRAM)
