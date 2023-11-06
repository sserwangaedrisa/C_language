#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int p);

int main(void) {
    int n = get_size();
    print_grid(n);
}

int get_size(void) {
    int n;
    do {
        n = get_int("What is the number of blocks: ");
    } while (n < 1);
    return n;
}

void print_grid(int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            printf("#");
        }
        printf("\n");
    }
}
