#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

//printf, fprintf, putc , puts;
//fscanf, scanf, fgets, fgetc getchar

//fseek -> 

int main(){
    FILE *f1 = fopen("test.txt", "r");
    FILE *my_standart_out; 
    //fopen("test.txt", "r");//operacii samo za chetene// r+ chetene i pissane
                                            //w -> zapiswa i go trie predishnoto sydyrvanie
                                            //w+ -> chetene i pisane syzdawa se ako ne e syshtestwuwal 
                                            //a+ -> chetene i dov=bawqne na kraq na fajla , syzdawa se ako ne syshtestwywa

    if(!f1) perror("error");

    char buff[10]; //zapiswame dannite w bufera 
    fgets(buff, 10, f1); //f1 dawa pointer kymfajla ako e NULL dawa grashja

    puts(buff); // chetem ot tqh

    fgets(buff, 10, f1); //f1 dawa pointer kymfajla ako e NULL dawa grashja
    puts(buff); 

    fseek(f1,-10,SEEK_SET);
    if(errno){
        perror("error");
    }
    printf("%ld\n", ftell(f1));
    fgets(buff, 10, f1); //f1 dawa pointer kymfajla ako e NULL dawa grashja
    puts(buff); 

    fseek(f1,-10,SEEK_END);
    fgets(buff, 10, f1); //f1 dawa pointer kymfajla ako e NULL dawa grashja
    puts(buff); 



    fclose(f1);



    return 0;
}