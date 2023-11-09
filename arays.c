#include <cs50.h>
#include <stdio.h>

//Average function is declared to take in only the arrays
float average(int array[]);
    const    int n = 3;

int main(void) {

    int scores[n];
        for(int i = 0; i < n;i++) {
        scores[i] = get_int("Give me the number: ");

    }
    printf("Average is %f\n", average(scores));
}

float average(int array[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];

    }
    return sum / (float)n;
}