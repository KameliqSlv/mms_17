#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
    Напишете програма, която приема три числа от аргументи 
    от командния ред.
    След това извиква функцията триангле - 3-те числа, 
    подадени като аргуменр от командния ред 

    ./triangle  3 10 2 
    perimetr: 
    Area: 
*/

int triangle(double a, double b, double c, double *aria, double *perimeter) {
  if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b) {
    return -1;
  }
  double HP = 0;
  *perimeter = a + b + c;
  HP = *perimeter / 2;
  *aria = sqrt(HP * (HP - a) * (HP - b) * (HP - c));
}



int main(int argc, char *argv[]) {
    if(argc != 4){
        fprintf(stderr, "Invalid nummber of argument\n");
        return EXIT_FAILURE;
    }

    double a,b,c;
    double aria, perimeter;
    

    /* ---- първи възможен начин ----
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
    */

    /* ---- втори възможен начин ---- 
    a = strtod(argv[1], NULL);
    b = strtod(argv[2], NULL);
    c= strtod(argv[3], NULL);
    */

    /* ---- втори възможен начин ---- 
    sscanf(argv[1],"%lf", &a);
    sscanf(argv[2],"%lf", &b);
    sscanf(argv[3],"%lf", &c);
    */


    
    char arr[strlen(argv[1]) + strlen(argv[2]) + strlen(argv[3]) + 2 + 1];//za space i "\0"
    strcpy(arr, argv[1]);
    arr[strlen(argv[1])] = ' ';
    strcpy(arr + strlen(argv[1]) + 1, argv[2]);
    arr[strlen(argv[1]) + 1 + strlen(argv[2])] = ' ';
    strcpy(arr + strlen(argv[1]) + 1 + strlen(argv[2]) + 1, argv[3]);
    arr[strlen(argv[1]) + 1 + strlen(argv[2]) + 1 + strlen(argv[3])] = '\0';

    sscanf(arr, "%lf %lf %lf", &a, &b, &c);


    printf("%lf %lf %lf\n", a, b, c);


    if(triangle(a, b, c, &aria, &perimeter) == -1){
        fprintf(stderr, "Invalid data\n");     
        
      }else {
        fprintf(stdout, "A = %lf P = %lf", aria, perimeter);
  \
      }


    return 0;
} 