#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** args){

	int f, n;
	char *buf1 = malloc(1024*sizeof(char)), *buf2 = malloc(1028*sizeof(char));

	f = open("text.txt", O_RDONLY, 0666);

	buf2[0] = 's';buf2[1] = 'a';buf2[2] = 'y';buf2[3] = ' ';

	n = read(f, buf1, 1024);
	
	for(int i = 4; i < 1028; i++)buf2[i] = buf1[i-4];
	
	for(int i = 5; i < 1028; i++){
		if(buf2[i] == '\n'){
			buf2[i] = ' ';
		}
	}
	system(buf2);
	return 0;
}
