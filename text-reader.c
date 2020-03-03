#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "text-reader.h"

/**
\brief This funciton use system call <say> and read file with name given as argument.
@param filename - name of file
@param size - maximum size of file
*/
void reader_from_file(char* filename, int size){
	int f, n;
	char *buf1 = malloc(size*sizeof(char)), *buf2 = malloc((size+4)*sizeof(char));

	f = open(filename, O_RDONLY, 0666);
	buf2[0] = 's';buf2[1] = 'a';buf2[2] = 'y';buf2[3] = ' ';
	n = read(f, buf1, size);
	
	for(int i = 4; i < (size + 4); i++)buf2[i] = buf1[i-4];
	
	for(int i = 5; i < (size+4); i++)
		if(buf2[i] == '\n')
			buf2[i] = ' ';
	
	system(buf2);
}
