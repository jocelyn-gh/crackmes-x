
#include <string.h>
#include <stdio.h> 
#include <stdlib.h> 
#define MAX_LEN 8

// flags to let the compiler let us use gets for demonstration purposes //
#pragma GCC diagnostic push
#pragma GCC diagnostic warning "-Wimplicit-function-declaration"
#pragma GCC diagnostic error "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
/////////////////////////////////////////////////////////////////////

int main(int argc, char** argv)
{
    volatile int harmlessflag;
	char charPasswordBuffer[12] = "PassW0rd!";
    char charBuffer[12];
    harmlessflag = 1;
	while(harmlessflag == 1){	
	printf("Input password : ");
	gets(charBuffer);
		if(!strncmp(charPasswordBuffer,charBuffer, MAX_LEN)){
			printf("<3 access granted <3\n");
			harmlessflag = 0;
		}
		else {
			printf("</3 access denied </3\n");
		}
	}
	printf("Hit any key to continute");
	gets(charBuffer);
}
