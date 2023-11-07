#include <stdio.h>
int main(void)
{
    //while loops 
    int i = 0 ;
    int n =5;
    while (i < n){
        printf("I'm in the  loop \n");
        i++;
    }
    printf(" That was a while loop \n");


    for (int y = 0; y < n; y++) {
        printf("This is the for loop\n");
    }
    printf("That was a for loop");
}
