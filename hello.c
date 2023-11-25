#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("hello world \n");
    printf("This is the C language \n");
  
    printf("C is the core language that can make us learn other programing languages easily");

    string second = get_string("What is your second name:");
    string middle = get_string("What is your middle name: ");
    printf("hello, %s is your second name and %s is your middle name.\n", second, middle);
}