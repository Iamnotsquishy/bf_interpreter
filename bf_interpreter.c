#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bf_interpreter.h"


int increment_data_pointer(char * ptr) 
{
	return 0;
}

int decrement_data_pointer(char * ptr) 
{
	return 0;
}

int increment_data_value(char * ptr) 
{
	return 0;
}

int decrement_data_value(char * ptr) 
{
	return 0;
}

int output_data_value(char * ptr) 
{
	return 0;
}

int input_data_value(char * ptr) 
{
	return 0;
}

int open_bracket(char * ptr) 
{
	return 0;
}

int close_bracket(char * ptr) 
{
	return 0;
}


int main(int argc, char ** argv)
{
	int mem_size = DEFAULT_ARRAY_SIZE;

	/* process command line arguments */
	if (argc >= 2) {
		
		/* check for -mem=<num> command */
		for (int i = 1; i < argc; i++) {
			if (!(strncmp(argv[1], "-mem=", 5))) {
				char * memarg = strchr(argv[1], '=') + 1;
				if (*memarg == '\0') {
					printf("ERROR: mem arguments needs a parameter\n");
					exit(1);
				}
				int usrmemsize = atoi(memarg);
				if (usrmemsize == 0 || usrmemsize > 1024) {
					printf("ERROR: mem size should be a valid number between 1 and 1024\n");
					exit(1);
				}
				mem_size = usrmemsize;
				break;
			}			
		}
	}
	
		/* welcome message */
	printf("\n******************************************************\n");
	printf("*Simple brainfuck interpreter written by Quinn Dibble*\n");
	printf("*For help, enter \"help\"                              *\n");
	printf("*To quit, enter \"quit\"                               *\n");
	printf("******************************************************\n");

	/* set up memory for program */
	char memory[mem_size];
	
	return EXIT_SUCCESS;
}
