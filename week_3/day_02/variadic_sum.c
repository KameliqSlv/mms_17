#include <stdio.h>
#include <stdarg.h>

int sum_variadic(int argc, ...){
    va_list args;
    va_start(args, argc); 
    //podavame samiq list posle podawame posledniq elemnt na funkciqta
    //va_arg(args, int);
   // printf("%d\n", va_arg(args, int));
     //printf("%d\n", va_arg(args, int));
     // printf("%d\n", va_arg(args, int));
    //dawa ni samiq argument
    int sum = 0;
    for(size_t i = 0; i < argc; i++){
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
    //


}

int main(){
    printf("%d\n", sum_variadic(5,10,20,30,40,50));

    



    return 0;
}