#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
void change_to_binary(int letter, int binary_form[8]);

int main(void)
{
    // TODO: Implement the code to work.
    string message = get_string("What is the message: ");
    int binary_form[8];
    for (int i = 0; i < strlen(message); i++)
    {
        int letter = message[i];
        change_to_binary(letter, binary_form);
        for (int j = 0; j < 8; j++)
        {
            print_bulb(binary_form[j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        printf("\U0001F7E1");
    }
}

void change_to_binary(int letter, int binary_form[8])
{
    for (int i = 7; i >= 0; i--)
    {

        if (letter < 1)
        {
            binary_form[i] = 0;
        }
        else if (letter == 1)
        {
            binary_form[i] = 1;
            letter = 0;
            // hello
        }
        else if (letter > 1)
        {
            binary_form[i] = letter % 2;

            letter = letter / 2;
        }
    }
}
