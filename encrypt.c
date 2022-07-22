#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* decrypt(char* str, int* random, int* div){
    int len = strlen(str);
    char* res = malloc(len*sizeof(char));


    for(int x=0; x<len; x++){
        int a = str[x]/(*random);
        res[x] = (div[x]*60) + a;  
    }
    return res;
}

char* encrypt(char* str, int* random, int* div){
    
    int ran = rand()%3;
    random = &ran;
    int len = strlen(str);
    div = malloc(len*sizeof(int));
    char* result = malloc(len*sizeof(char));


    for(int x = 0; x<len; x++){
        div[x] = str[x]/60;
        result[x] = (str[x]%60)*(*random); 
    }

    printf("%s\n", result);
    result = decrypt(result, random, div);
    printf("%s\n", result);
    free(div);
    free(result);
    return " ";
}



int main(){
    char* str;
    int* random;
    int* div;
    
    str = "todayy is a grea*t day :-))}";
    
    char* hope = encrypt(str, random, div);
    
    printf("%s", hope);
}