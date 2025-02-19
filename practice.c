#include <stdio.h>

// This demonstrates how to make an array in c
int main(){
    char ABC[] = {65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,
                  81,82,83,84,85,86,87,88,89,90};
    char i;
    printf("\nHello, my name is %c%c%c%c%c%c!\n\n", ABC[2],ABC[14],ABC[1],ABC[1],ABC[11], ABC[4]);
    for (i = 0; i < 26; i++){
        printf("%d \t\t %c\n", i,ABC[i]);
    }
    printf("\n");
    return 0;
}