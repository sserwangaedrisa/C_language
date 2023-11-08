#include <cs50.h>
#include <stdio.h>
// Below are the clues that we have some functions that are to be described later in the code
int get_size(void);
void print_grid(int p);
// This is the main function
int main(void) {
    int n = get_size();
    print_grid(n);
}
//function that recieves the number of grids to make
int get_size(void) {
    int n;
    do {
        n = get_int("What is the number of blocks: ");
    } while (n < 1);
    return n;
}
// Below is the voic function that prints the grid after recieving the out put of the above function
void print_grid(int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            printf("#");
        }
        printf("\n");
    }
}
