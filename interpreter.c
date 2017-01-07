#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, int * argv[]){

	FILE * f = fopen(argv[1], "r+"); //open file

	char ** instructions = (char **) malloc(sizeof(char *) * 1000); //allocate instruction memory
	for(int i = 0; i < 1000; i++){
		instructions[i] = (char *) malloc(sizeof(char) * 64);
	}

	char * buf = malloc(sizeof(char) * 64);
	int i = 0;
	int linesize = 0;
	while( (linesize = getline( &buf, &bufsize, f)) ){ //read instructions from file into instruction memory
		buf[linesize -1 ] = 0;
		strcpy(instructions[i], buf);
		i++;
	}

	//execution
	pc = 0;
	char * currinst = malloc(sizeof(char) * 64);
	void * dmem = malloc(64000);

	for(;;){
		currinst = instructions[pc++];

		if( (strcmpn(currinst, "add"), 3) == 0){
			char ** regbuf = malloc(sizeof(char *) * 4);
			readreg()
		}
	}
}
