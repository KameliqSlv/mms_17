#include <stdio.h>


int main(int argc, char *argv[]) {
    int my_num = 48;
    int base = 2;
    while (my_num > 0) 
    {
        int remainder = my_num % base;
        printf("%d remainder : %d\n ",my_num, remainder);
        my_num = my_num / base;
    }//end of while

    return 0;
} //end of main()