#include <cs50.h>
#include <stdio.h>
int main(void)
{
    char y = get_char("Do your want to proceed: ");
    if (y == 'y' || y=='Y'){
        printf("Lets proceed boss\n");
    }
    else if( y == 'n' || y=='N'){
        printf("Leaving the site\n");
    }
    else{
        printf("Respond with a 'y' for yes or an 'n ' for the no\n");
    }
}