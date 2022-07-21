#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main(){
    int range;
    int input;
    printf("Guess a number between 1 and ... ?\n");
    scanf("%d", &range);
    int randomNum = (rand()%range);
    printf("Take a Guess: \n");
    scanf("%d", &input);
    if(range < input){
        fprintf(stderr, "Error, Number not in Range\n");
        exit(0);
    }
    if(input != randomNum ){
        while(input != randomNum ){
            if(input > randomNum){
                printf("Wrong Guess: Try a lower number\n");
            }
            if(input < randomNum){
                printf("Wrong Guess: Try a higher number\n");
            }
            scanf("%d", &input);
        }
    }
    printf("Correct!!\n");
    exit(0);
    return 0;
}