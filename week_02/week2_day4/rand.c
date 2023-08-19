#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Напишете програма 
*/

int main(){
    unsigned A = 100, B = 200;


    // seed
    srand(100); 
    srand(time(NULL));
    // 100 + slu`jno `islo w diapazona (200 - 100)
    // 100 + skuchajno chislo w diapazon (0 - 100)
    for (int i = 0; i < 10; i++){
        printf("%d\n", A + rand() % (B - A));
    }
}
//ot 100 do 150 