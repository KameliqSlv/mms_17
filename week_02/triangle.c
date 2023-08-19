#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// snimka usluwie (26.7.2023 :: 12:33)

int triangle(double a, double b, double c, double *aria, double *perimeter) {
  if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b) {
    return -1;
  }
  double HP = 0;
  *perimeter = a + b + c;
  HP = *perimeter / 2;
  *aria = sqrt(HP * (HP - a) * (HP - b) * (HP - c));
}

int main(int argc, char* argv[]) {
  double a, b, c;
    double aria, perimeter;

    sscanf(*argv , "%lf %lf %lf", &a, &b, &c);
    a = atoi(argv[1]);    
    b = atoi(argv[2]);
    c = atoi(argv[3]);


  int scanf_res;// Wry]a broq na rezultatite // poneve sa tri shte spre cikyla ako sa poweche
  while((scanf_res = scanf("%lf %lf %lf", &a, &b, &c)) == 3){
      if(triangle(a, b, c, &aria, &perimeter) == -1){
        
        
        printf("Invalid Data\n");
      }else {
        printf("Area: %.2lf\n", aria);
        printf("Perimeter: %.2lf\n", perimeter);
      }
  }
  

 

  //int exit = triangle(a, b, c, &aria, &perimeter);

  

  // scanf("%f %f %f", &a, &b, &c);

  /*printf("a = ");
  scanf("%lf", &a);
  printf("b = ");
  scanf("%lf", &b);
  printf("c = ");
  scanf("%lf", &c);*/

  return 0;
}