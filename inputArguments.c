#include <cs50.h>
#include <stdio.h>

// The way of using input arguments in the c code
// This helps us to call the program and direct it to what we need it to do at once instead of call the program and then give it the command to ecexute.
int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Enter the right name \n");
        return 1;

    }
    else {
        printf("Your name is %s\n", argv[1]);
        printf("%i\n", argc);
        return 0;

    }
}