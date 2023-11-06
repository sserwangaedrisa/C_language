#include <cs50.h>
#include <stdio.h>
int main(void)
{
    char y = get_char("Do your want to proceed: ");
    if (y == 'y'){
        printf("Lets proceed boss");
    }
    else if( y == 'n'){
        printf("Leaving the site");
    }
    else{
        printf("Respond with a 'y' for yes or an 'n ' for the no");
    }
}