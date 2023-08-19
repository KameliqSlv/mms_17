#include <stdio.h>

int main(int argc, char* argv[]){

    char my_char = 'a';
    int my_int = 10;
    float my_float = 0.55;
    double my_double = 0.789;
    _Bool my_bool = 10;

    printf("%c\n", my_char);
    printf("%d\n", my_int);
    printf("%f\n", my_float);
    printf("%lf\n", my_double);
    printf("%d\n", my_bool);

    int my_binary = 0b1011;
    printf("Bynary: %d\n", my_binary);

    int octalNumber1 = 031; //octa number
    int octalNumber2 = 31; //is not octal number
    printf("My octal1: %d \n", octalNumber1);
    printf("My octal2: %d \n", octalNumber2);

    return 0;
}

