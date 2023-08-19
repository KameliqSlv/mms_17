#include <stdio.h>

int main(int argc,char* argv[]){

    //value
    int kami = 10;
    printf("Kami: %d\n",kami);


    //address
    int *ptr = &kami;
    printf("Pointer: %p\n", ptr);

    //priswoqwa stojnostta 
    int value = *ptr;
    printf("Value: %d\n", value);

    //proverqwqme dali sa rawni
    if(kami==value){
    printf("Equals! \n");
    }

    //Priswoqwane na strojnost po adres na promenliwata(a ne po imeto i)
    *ptr = 20; // priswoili sme 20 na promenliwata chrez pointera
    
    printf("Value: %d\n", value);
    printf("Kami: %d\n",kami);
    printf("Pointer: %p\n", ptr);



    return 0;
}//end of main