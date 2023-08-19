#include <math.h>
#include <stddef.h>
#include <stdio.h>

void myMap(int arr[], int n, int (*f)(int));
int scanEl(int a);
int printEl(int a);
int square(int a);

//arr : 1 2 3 4 5 6 
// f = int addone(int)
//int (*f)(int) = addOne
// myMap(arr, 7, Addone)
//arr: 1 2 3 4 5 6 7


int main(){

    int arr[100];

    myMap(arr, 5, scanEl);
    myMap(arr,5, printEl);
    myMap(arr, 5, square);

   // printf("Elements : %d", myMap(arr, 5, square) );

    return 0;
}

void myMap(int arr[], int n, int (*f)(int)){
    for(size_t i=0; i<n; i++){
        arr[i] = f(arr[i]);
    }
    
}

//направере узвуйане на мап за въвеждане на елементи
int scanEl(int a){
    printf("Set element: ");
    scanf("%d",&a);
    return a;
}

int printEl(int a){
    printf("Array element : %d \n ",a);
    return a;
}

int square(int a){
    printf("Square element : %d\n", a*a );
    return 0;
    //return a*a;
}