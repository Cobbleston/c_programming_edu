#include <stdio.h>

int main(){

    // Declare string variables
    char HELLOWORLD[] = "Hello world.";
    char NEWLINE[] = "\n";

    char SUCCESS_PROG[] = "This program has succesfully been ran. Program has ended.";

    printf("%s", NEWLINE);
    printf("%s", HELLOWORLD);
    printf("%s", NEWLINE);
    for (HELLOWORLD = HELLOWORLD[0]; HELLOWORLD <= HELLOWORLD[12]; HELLOWORLD++) {
		printf("%s \t\t %s\n", HELLOWORLD, HELLOWORLD);
	}
    printf("%s", SUCCESS_PROG);
    printf("\n%s\n", NEWLINE);
    return 0;
}
