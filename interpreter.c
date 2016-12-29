#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, int * argv[]){


	FILE * f = fopen(argv[1], O_RDONLY); //open file

	char ** instructions = malloc(sizeof(char *) * 1000); //allocate instruction memory
	for(int i = 0; i < 1000; i++){
		instructions[i] = malloc(64);
	}

	while( fgets(instructions[i], sizeof(instructions[i]), f) ){} //read instructions from file into instruction memory

	//execution
	pc = 0; //program counter
	char currinst[64]; //current instruction
	void * dmem = malloc(64000); //allocate data memory

	for(;;){
		currinst = instructions[pc++];
		switch(currinst){
			
		}
	}

}
