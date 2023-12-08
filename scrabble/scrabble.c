#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Getting input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Printting the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int letter_points[strlen(word)];
    for (int i = 0; i < strlen(word); i++)

    {
        char letter = toupper(word[i]);
        letter_points[i] = 0;

        for (int j = 0; j < 27; j++)
        {
            if (letter == letters[j])
            {
                letter_points[i] = POINTS[j];
            }
        }
    }
    int score = 0;
    for (int k = 0; k < strlen(word); k++)
    {
        score += letter_points[k];
    }
    return score;
}
