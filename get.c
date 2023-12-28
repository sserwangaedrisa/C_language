#include <stdio.h>
int main(void){
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x is %i\n", x);

    char* s[4];
    printf("s: \n");
    scanf("%s", s);
    printf("%s", s);
}