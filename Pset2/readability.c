#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string input);
int count_words(string input);
int count_sentences(string input);

int main(int argc, string argv[]){

    string input = get_string("Text: ");
    int Letters = count_letters(input);
    int Words = count_words(input);
    int Sentences = count_sentences(input);
    // printf("%i letter(s) \n", Letters);
    // printf("%i word(s) \n", Words);
    // printf("%i sentence(s) \n", Sentences);

    float L = ((float) Letters / (float) Words) * 100;
    float S = ((float) Sentences / (float) Words) * 100;
    //printf("Letters: %f, Sentences: %f", L, S);
    float index = (0.0588 * L - 0.296 * S - 15.8);
    int result = round(index);
    
    if(result < 1){
        printf("Before Grade 1\n");
    }
    else if(index > 16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %i\n", result);
    }

}


int count_letters(string input){
    int letters = 0;
    for(int i = 0; i < strlen(input); i++){
        //printf("%c", input[i]);
        char j = input[i];
        //printf("%i \n", j);
        if((j >= 65 && j <= 90) || (j >= 97 && j <=122)){
            letters++;
        }
    }
    return letters;
}

int count_words(string input){
    int words = 0;
    for(int i = 0; i< strlen(input); i++){
        char j = input[i];
        if(j == 32){
            words++;
        }
    }
    return words += 1;
}

int count_sentences(string input){
    int sentences = 0;
    for(int i = 0; i < strlen(input); i++){
        char j = input[i];
        if(j == 46 || j == 33 || j == 63){
            sentences++;
        }
    }
    return sentences;
}