// Using the increment operator ++ and -- in C
// Examples are with ASCII

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	// use for sizing variables
	const int sz_int = 1; // use %d
	const float sz_float = 1.0; // use %f
	const double sz_double = 1.0; // use %lf
	const char sz_char = 'C'; // use %c
	char sz_str[12] = "hello world"; // use %s, we said the size will be 12

	// using ++, will add 1 to the current value of the integer
	// using --, will subtract 1 from the current value of the integer
	int num_one = 0;
	int num_two = ++num_one;
	int num_three = 0;
	int num_four = --num_three;

	// using ++, float 0.0 will become float 1.000000
	// using --, float 0.0 will become float -1.000000
	float float_one = 0.0;
	float float_two = ++float_one;
	float float_three = 0.0;
	float float_four = --float_three;

	// ASCII control characters (range 00-31, plus 127)(32 is a space)
	// ASCII control characters 00-31 do not have visible representations
	// These were designed to control hardware devices
        // Null character does not have a visible representation in the console 
        // when printed using standard output functions like 'printf'
	// int a = NULL; is considered bad code, hard to read
	char i;
	char ii = 127;

	// using ++, character A will become character B
	// using ++, character a will become character b
	char A = 'A';
	char A_ = ++A;
	char a = 'a';
	char a_ = ++a;
	char AA = 'A';
	char AA_ = --AA;
	char aa = 'a';
	char aa_ = --aa;

	// using ++, character Z will become character [
	// using ++, character z will become {
	char Z = 'Z';
	char Z_ = ++Z;
	char z = 'z';
	char z_ = ++z;


	// Print the size of each data type in C using sizeof
	printf("\n");
	printf(" The size of an integer is %d\n", sizeof(sz_int));
	printf(" The size of a float is %d\n", sizeof(sz_float));
	printf(" The size of a double is %d\n", sizeof(sz_double));
	printf(" The size of a char is %d\n", sizeof(sz_char));
	printf(" The size of the string,hello world, is %d\n\n", sizeof(sz_str));

	// Print different sets of ASCII to the console
	printf("ASCII Values (Special Characters) 33-47 (32 is space):\n\n");
	for (i = 32; i <= 47; i++) {
		printf("%c \t\t %d\n", i, i);
	}
	printf("\n\n");
	printf("ASCII Values (0-9) 48-57:\n\n");
	for (i = 48; i <= 57; i++) {
		printf("%c \t\t %d\n", i, i);
	}
	printf("\n\n");
	printf("ASCII Values (Special Characters) 58-64:\n\n");
	for (i = 58; i <= 64; i++) {
		printf("%c \t\t %d\n", i, i);
	}
	printf("\n\n");
	printf("ASCII Values (A-Z) 65-90:\n\n");
	for (i = 65; i <=90; i++) {
		printf("%c \t\t %d\n", i,i);
	}
	printf("\n\n");
	printf("ASCII Values (Special Characters) 91-96:\n\n");
	for (i = 91; i <=96; i++) {
		printf("%c \t\t %d\n", i,i);
	}
	printf("\n\n");
	printf("ASCII Values (a-z) 97-122:\n\n");
	for (i = 97; i <=122; i++) {
		printf("%c \t\t %d\n", i,i);
	}
	printf("\n\n");
	printf("ASCII Values (Special Characters)123-126:\n\n");
	for (i = 123; i <=126; i++) {
		printf("%c \t\t %d\n", i,i);
	}
	printf("\n\n");
	printf("Examples of ASCII Values beyond 127 (127 is control character DEL):\n"); // 127 is used for DEL
	printf("*programmers will need to check their systems:\n\n");
    
        // Challenge: Try to construct an array of these know characters in 
        // Windows 11 Default Terminal App
    
	printf("\n\n");

	// Print the results to the console/user showing use of increment operator ++
	// and -- which is the inverse operator of ++.
	printf(" using ++, the integer is now %d \n", num_two);
	printf(" using --, the integer is now %d \n", num_four);
	printf(" using ++, float 9.0 will become float %f \n", float_two);
	printf(" using --, float 9.0 will become float %f \n\n", float_four);
	
	printf(" using ++, character A will become character  %c \n", A_);
	printf(" using ++, character a will become character  %c \n", a_);
	printf(" using --, character A will become character  %c \n", AA_);
	printf(" using --, character a will become character  %c \n", aa_);
	printf(" using ++, character Z will become character  %c \n", Z_);
	printf(" using ++, character z will become character %c \n\n", z_);

        // Using malloc and realloc, do not edit this
        int * numbers = malloc(6*sizeof(int));
        for(int iii = 0; iii < 6; ++iii) {
        numbers[iii] = 5;
        }
        numbers = realloc(numbers, 7*sizeof(*numbers));
        if(!numbers) {
        printf("Memory allocation failed, sorry, try again!\n");
        exit(1);
        }
        numbers[6] = 7;
        for(int iii = 0; iii< 7; ++iii) {
        printf("%d\n", numbers[iii]);
        }
        free(numbers);

	printf("\n");

	return 0;
}
