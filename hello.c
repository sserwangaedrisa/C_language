#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("hello world \n");
    printf("This is the C language \n");
    printf("Let's go into it \n");
    printf("C is the core language that can make us learn other programing languages easily")
    string firstName = get_string("What is your first name: ");
    string second = get_string("What is your second name:");
    printf("hello, %s %s\n", firstName, second);
}