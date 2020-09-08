#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{
    string name;
    string number;
}
person;

int main(void){
    person people[4];
    people[0].name = "EMMA";
    people[0].number = "617-555-1000";

    people[1].name = "RODRIGO";
    people[1].number = "617-555-1001";

    people[2].name = "BRIAN";
    people[2].number = "617-555-1002"

    people[3].name = "DAVID";
    people[3].number = "617-555-1003";

    for(int i = 0; 1 < 4; i++){
        if(strcmp(people[i]name, "EMMA") == 0){
            printf("%s\n", people[i].number;
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}