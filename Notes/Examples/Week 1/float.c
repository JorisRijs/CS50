#include <cs50.h>
#include <stdio.h>

int main(void){
    float price = get_float("What is the price?\n");
    printf("your total is %.2f.\n", price * 1.21);
}