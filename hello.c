#include <stdio.h>

int main(void)
{
    printf("hello world \n");
    printf("This is the C language \n");
    printf("Let's go into it \n");
    string firstName = get_string("What is your first name: ");
    string second = get_string("What is your second name:");
    printf("hello, %s %s\n", firstName, second);
}