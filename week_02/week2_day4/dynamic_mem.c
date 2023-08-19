#include <stdio.h>
#include <stdlib.h>


void f()
{
    //static int a;
    int b = 0;
    printf("%p\n", &b);
    int c;
    scanf("%d", &c);
    //a++;
    //b++;
    //printf("a = %d\n b = %d %p", a, b, &b);
    f();
}


int main(){
    f();
    f();
    f();
    f();

    return 0;
}