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
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
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

    // Populate array of candidates
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

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    int candidate_amount = sizeof candidates;
    for (int i = 0; i < candidate_count; i++)
    {
        //printf("%s\n", candidates[i].name);
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes += 1;
            //printf("Current voter has %i votes\n", candidates[i].votes);
            return true;
        }
    }
    
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    bool is_same = true;
    int num_cmp = candidates[0].votes;
    // TODO
    int equal_int = 0;
    for (int i = 0; i < candidate_count - 1; i++)
    {
        //Last i elements are already in place
        for (int j = 0; j < candidate_count - i - 1; j++)
        {
            if (candidates[j].votes > candidates[j + 1].votes)
            {
                candidate temp = candidates[j + 1];
                candidates[j + 1] = candidates[j];
                candidates[j] = temp;
            }
        }
    }
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes != num_cmp)
        {
            is_same = false;
        }
    }
    // for(int i = 0; i < candidate_count; i++){
    //         printf("%i\n", candidates[i].votes);
    // }

    if (!is_same)
    {
        if (candidates[candidate_count - 1].votes != candidates[candidate_count - 2].votes)
        {
            printf("%s\n", candidates[candidate_count - 1].name);
        }
        if (candidates[candidate_count - 1].votes == candidates[candidate_count - 2].votes)
        {
            printf("%s\n", candidates[candidate_count - 1].name);
            printf("%s\n", candidates[candidate_count - 2].name);
        }
    }
    else
    {
        for (int i = 0; i < candidate_count; i++)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}

