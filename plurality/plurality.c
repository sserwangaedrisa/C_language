#include <cs50.h>
#include <stdio.h>
#include <string.h>
// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;
// Initiating the Array of candidates
candidate candidates[MAX];

// Initiating the Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }
    // Filling in the candidates in the array.
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
        {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");
    // Loop over all voters to count the votes.
    for (int i = 0; i < voter_count; i++)
         {
        string name = get_string("Vote: ");
        vote(name);
        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election.
    print_winner();
}
// Update vote totals given a new vote
bool vote(string name)
{

    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes = candidates[i].votes + 1;
            return true;
        }
    }
    return false;
}
// Print the winner (or winners) of the election
void print_winner(void)
{
    // string winners[candidate_count];
    int Highest_votes = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > Highest_votes)
        {
            Highest_votes = candidates[i].votes;
        }
    }
    for (int j = 0; j < candidate_count; j++)
    {
        if (candidates[j].votes == Highest_votes)
        {
            printf("%s\n", candidates[j].name);
        }
    }
}
