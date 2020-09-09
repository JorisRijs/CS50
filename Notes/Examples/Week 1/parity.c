#include <cs50.h>
#include <stdio.h>

int main(void){
    int number = get_int("Give a number:\n");
    if (number % 2 == 0){
        printf("The number %i is even\n", number);
    }
    else{
        printf("The number %i is uneven\n", number);
    }
}