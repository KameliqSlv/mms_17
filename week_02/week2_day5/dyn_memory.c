#include <stdio.h>
#include <stdlib.h>

int main(){
    void *p = malloc(sizeof(double));
    double *d_p = p;
    *d_p = 12.5;
    printf("%lf\n", *d_p);
    free(d_p);


    void *p2 = calloc(sizeof(double), sizeof(double));
    double *d_p2 = p2;
    printf("%lf\n", *d_p2);
    free(p2);

    void *p3 = malloc(sizeof(int)*100);
    int *i_p3 = p3;
    i_p3[0] = 123;
    i_p3[1] = 456;
    i_p3[2] = 789;
    void *i_p_r = realloc(i_p3, sizeof(int)*300);
    //osvobojdawa pametta i zarevda mowa pamet
    //stojnostite ot starata pamet sjte se zapazqt i w nowata
    int *i_p4 = i_p_r;
    printf("%d %d %d \n", i_p4[0], i_p4[1], i_p4[2]);

    free(i_p4);
    return 0;
}   