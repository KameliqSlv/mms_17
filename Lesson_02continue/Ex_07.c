#include <stdio.h>


int main(int argc, char *argv[]) {
    int age;
    double weight;
    printf("Enter youre age: ");
    scanf("%d", &age);
    printf("Enter youre weight: ");
    scanf("%lf", &weight);
      
    
    if (age < 18){
        printf("You are not eligible to donate blood.\n");
    } else if (age > 18 && weight > 100){
        printf("You are not eligible to donate blood. \n ");
    }
    else if (age > 18){
        printf("You are old enough to vote.\n");
    }

    return 0;
}//end of main