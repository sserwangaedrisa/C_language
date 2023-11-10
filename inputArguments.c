#include <cs50.h>
#include <stdio.h>

// The way of using input arguments in the c code
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