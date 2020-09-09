#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    //Getting an integer of the user for the height
    do
    {
        height = get_int("Height: \n");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        //For loop for printing all of the spaces
        for (int k = height - i - 1; k > 0; k--)
        {
            printf(" ");
        }
        //For loop for printing all of the hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}