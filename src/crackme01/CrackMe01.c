#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

#define MAX_LEN 80

// flags to let the compiler let us use gets for demonstration purposes //
#pragma GCC diagnostic push
#pragma GCC diagnostic warning "-Wimplicit-function-declaration"
#pragma GCC diagnostic error "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
/////////////////////////////////////////////////////////////////////

int main() {


	char* WowLookAtThisPasswordArray = "password";
	char UserInput[MAX_LEN];

	bool reallyObviousFlag = false;

	while (reallyObviousFlag == false) {
		printf("Enter password: ");
		gets(UserInput);

		if (!strncmp(WowLookAtThisPasswordArray, UserInput, MAX_LEN)) {
			reallyObviousFlag = true;
			printf("Unlock get!\n");
		}
		else
			printf("Wrong password try again!\n");
	}
	printf("Hit any key to continute");
	gets(UserInput);
	return 0;
}
