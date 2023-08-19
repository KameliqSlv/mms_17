#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* toUpper(const char* str){
    char* result = malloc(strlen(str) + 1);
    for(int i = 0; i < strlen(str); i++){
        result[i]= toupper(str[i]);
    }
    //free(results)
    return result;
    //free(result);

    /*
        while(str[i] != "\0" ){
            if(str[i] > = 'a' && str[i] <= 'z'){
                *(result + i) = str[i] - 'a' + 'A';
            } else {
                result[i] = str[i];
            }
            i++;
        }

        result[i] = '\0';
        return result;
    */
}

int main(){
    char str[10];
    scanf("%s", str);

    char* result = toUpper(str);
    printf("%s\n", result);
    free(result);

    return 0;
}