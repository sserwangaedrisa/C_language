#include <cs50.h>
#include <stdio.h>

int main(void){
    int array[] = { 30, 49, 84, 200 };
    int number = get_int(" Enter the number: ");
    for (int i = 0; i < 4; i++) {
        if (array[i] == number) {
            printf("The number is present in the array\n");
            return 0;
        }

        
        printf("The number is not found \n");
        return 2;


    }

    return 2;
}