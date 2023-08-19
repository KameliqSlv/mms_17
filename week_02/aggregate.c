#include <stdio.h>

int aggregate(int *arr, int n, int init, int(*f)(int, int))
{
    int res = init;
    for(size_t i = 0; i < n; i++){
        res = f(res, arr[i]);
    }
    return res;
}
int add(int a, int b){
    return a + b;
}

int mult(int a, int b){
    return a * b;
}

int addSquare (int sum, int a){
    return sum + a*a;
}

void merge(int *arr1, int n1, int *arr2, int n2, int *dest){
    //arr1 i arr 2 sa sortirani
    //arr2 i arr1 се сливат и резултата се записва в дест
    //1 5 8
    //3 7 10
    //1 3 5 7 8 10
   /* 
    dest = dest + my_strlen(dest);
    while(*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
   */

   

}

int main(){
    int arr[] = {1,2,3,4,5};

    //(((((15+1)+2)+3)+4)+5)
    printf("%d\n",aggregate(arr, 5, 15, add));
    //aggregate(arr, 5, 15, add);
    ///(((((9 * 1)*2)*3)*4)*5)
    printf("%d\n",aggregate(arr, 5, 9, add));
    //aggregate(arr, 5, 9, mult);
     printf("%d\n",aggregate(arr, 5, 0, addSquare));



    return 0;
    
}