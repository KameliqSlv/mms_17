#include <stdio.h>

/*  
    ant arr[7];
    int(*p)[7]

    адреса на целия масив и типа е воид
    ъказатек йъм масив към 7 елемента

*/
void print_row(int(*arr)[4]){
    for(size_t i = 0; i < 4 ; i++){
        printf("%d ",(*arr)[i]);
    }
    printf("\n");
}

void print_2d_arr(int arr[3][4]){
    for(size_t i = 0; i < 3; i++){
        print_row(arr);
    }
}
void print2darr(int arr[][4], int n){
    for(size_t i = 0; i < n; i++){
        for(size_t j = 0; j < 4; j++){
            printf("%d", arr[i][j]);
        }
    }
}
int main(){
    int arr[7];
    
    int (*p_to_arr)[7] = &arr;

    printf("%p\n", p_to_arr);
    printf("%p\n", *p_to_arr);
    printf("%d\n", **p_to_arr);
    printf("%p\n", p_to_arr+1);
    printf("%p\n", arr + 7);
    
        int *p = arr;

    //ima 3 reda i 7 koloni
    int arr_2d[3][4] = {
        { 0, 0, 0, 0},
        { 0, 0, 0, 0},
        {5,6,7,8}
    };

    //parche posledowateln=na pamet 
    //sizeof == 3 * 4 * sizeof(int)

    //ukazatel kym pyrwiq element
    int *p2 = arr_2d[0]; 

    for(size_t i = 0; i< 3*4; i++){
        printf("%d ", p2[i]);
        //*(p2+i);
    }



}