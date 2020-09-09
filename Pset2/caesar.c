#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, string argv[]){
    int key;

    if(argc != 2){
        printf("Usage: ./caesar key \n");
        return 1;
    }
    else{
        for(int i = 0; i < strlen(argv[1]); i++){
            //printf("%c \n", argv[1][i]);
            if(!isdigit((int)argv[1][i])){
                printf("Please provide a numeric key\n");
                return 1;
            }
        }
        key = atoi(argv[1]);
        if(key < 1){
            printf("If the key is a number, please provide a number greater or equal to 1 \n");
            return 1;
        }

    }
    string cipher_text = "";
    string plain_text = get_string("plaintext: ");
    printf("ciphertext: ");
    for(int i = 0; i < strlen(plain_text); i++){
        int character = (int) plain_text[i];
        int ci;
        //printf("Before, %c \n", plain_text[i]);
        if(isalpha(character)){
            if(isupper(character)){
                character -= 65;
                ci = (character + key) % 26;
                ci += 65;
                //printf("%c", (char) ci);
            }
            if(islower(character)){
                character -= 97;
                ci = (character + key) % 26;
                ci += 97;
            }
        }
        else{
            ci = character;
        }
        printf("%c", (char) ci);
        // printf("After, %c \n", ci);

    }
    printf("\n");
}

