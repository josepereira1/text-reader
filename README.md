# text-reader
Program that reads texts

# How to test text-reader?

- insert some text in text.txt
- make run

# How to use text-reader library in your code?

- add/include .h/c files to your project 

```c
#include "text-reader.h"

int main(void){	
	//	specify the name of file, and the maximum size;
	speak_text_file("text.txt", 1024);
}
```

- gcc main.c text-reader.c -I text-reader.h -o execute
- ./execute
