#include <stdio.h>
#include <stdlib.h>

int main() {
    const int sz = 255; // set max size of string to 255
    char str[sz];
    FILE *fptr = fopen("Chapter_0.txt", "r"); // Use fopen to open .txt file as read only
    if (fptr == NULL) {
        printf("There was an error while opening the file."); // Handle the error if file is not opening
        return 1;
    }
    while (fgets(str,sz,fptr) != NULL) {
    	printf("%s", str);
    };
    printf("\n\tEnd of file.The size of FILE stored in memory is %d bytes.\n", sizeof(FILE)); // FILE is always 48 bytes
    fclose(fptr);
    printf("\n\tFile closed...\n\n");
    printf("\n\tClosing Program\n\n");
    return 0;
}