#include <stdarg.h>
#include <stdio.h>

void my_printf(const char *fmt, ...){
    // ... -> elipsis
    va_list args;
    va_start(args, fmt);
    //va_list args2;
    //va_copy(args2, args);
    printf("[Custim Printf]");
    vprintf(fmt, args);

   
    va_end(args);
    //va_end(args2);
}
void log(){
    
}
int main(){
    my_printf("%d %d %d\n", 30,40,50);



    return 0;
}