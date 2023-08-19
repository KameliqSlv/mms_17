#include <stdio.h>

int main(){
    //printf("");
    //scanf("")
    //perrror("") //awtomati`no si slaga now red
    printf("Hello, world\n");
    puts("Hello, world!"); // pechata string i slaga now red sam. priema masiw ot char no ne moj=vem da pechatame chisla, int trqbwa da se konversira w char[];
    int a = 0;
    char astr[5] = "1000";
    puts(astr);

    putchar('a'); //pechatame samo char

    fputc('c' , stderr); //izbirame si potoka 
    fputs("Hello world", stderr);

    fprintf(stderr, "Hello world \n %d \n", 15+5);

    //EOF -> End of file // pri greshka se wryshta EOF

    int a1,b;
    scanf("%d %d" , &a1, &b); // wryshta broq na neshtata koito sa bili procheteni

    while (scanf("%d %d" , &a1, &b) != EOF) {
        printf("%d %d\n", a1, b);
    }

      while (scanf("%d %d" , &a1, &b) == 2) {
        printf("%d %d\n", a1, b);
    }
    int res_scanf;
      while ((res_scanf=scanf("%d %d" , &a1, &b))) {
        printf("scanf: %d\n", res_scanf);
        printf("%d %d\n", a1, b);
    }

    fscanf(stdin, "%d %d", &a, &b);

    char buf[11];
    fgets(buf, 10, stdin); 
    fputs(buf,stderr);

    return 0;
}