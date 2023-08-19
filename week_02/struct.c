#include <stdint.h>
#include <stdio.h>

typedef struct Points{
    double x;
    double y;
}P;

typedef struct {
    int houseNumber;
    char streetName[30];
    char *residentName[10];
    P coordinate;
    void (*f)(int,int);
    int arr[];
} Addres;

int main(){
    P a;
    a.x = 15.6;
    a.y = 18.9;
    
    printf("%lf",a.x);
    printf("%lf",a.y);

    P b = {30.2 , 45.1};
    
    char name1[] ="Gosho";
    char name2[] ="Pesho";

    Addres arr1 ={
        120,
        "Cherni vrah",
        {name1, name2},
        {
            a.x = 22.5,
            a.y = 100.5
        }
    };

    Addres *p1 = &arr1;
    printf("%lf", (*p1).coordinate.x);
    printf("%lf", p1->coordinate.x);
    return 0;
}