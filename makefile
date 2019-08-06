all: bf_interpreter.c bf_interpreter.h
	gcc -o brainfuck bf_interpreter.c

clean: brainfuck
	rm -f brainfuck
