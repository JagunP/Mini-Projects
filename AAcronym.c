#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void Acro(char* input){
    int len = strlen(input);
    int leng = 1;
    for(int x = 0; x<strlen(input); x++){
        if(input[x] == ' '){
            leng++;
        }
    }

    char output[leng];
    output[0] = input[0];
    int total = 1;
    for(int x = 1; x<len; x++){
        if(input[x] == ' '){
            output[total] = input[x+1];
            total++;
        } 
    }

    printf("%s\n", output);
}


int main(){
    char input[100];
    printf("\nEnter Your Phrase Here: \n");
    fgets(input, 100, stdin);
    printf("\nYour Acronym is:\n");
    Acro(input);
    printf("\nThanks for Playing\n");

return 0;
}