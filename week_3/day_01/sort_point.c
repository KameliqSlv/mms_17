#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//създайте масив в динамичната памет от поинт
//задайте случайни начални стойности на точките.
// изполвайтр ясорт за да сортирате масива:
// - сортирайте масива в нарастваш ре по ь
// - сортирайте масива в намаляваш ред по ъ
// - сортирайте масива по растоянието на точката (x,y) от точката (0,0)
// след всяко сортиране да се изпечатва създържанието arr


#define N 30



typedef struct {
    double x;
    double y;
}points;


int compare_ints__inc(const void *p1, const void *p2){
    //return (((points*)p1)->x > ((points*)p2)->y)?1:-1;
    //(*(double*)x) -> ;
    return (((points*)p1)->x - ((points*)p2)->y)*1000;
}

int compare_ints__dec(const void *p1, const void *p2){
    return (((points*)p2)->y - ((points*)p1)->x)*1000;

}

double dist(points a, points b){
    double dX = a.x - b.x,
            dY = a.y - b.y;
    return sqrt(dX * dX + dY*dY); 
    //formula
    // sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))
}

const points O = {0.f, 0.f};


int compare_dist(const void *p1, const void *p2){
    double dist1 = dist((*(points*)p1), O),
            dist2 = dist((*(points*)p2), O);
    return (dist1 - dist2)*1000;
}

void print_arr(points art[], size_t n){
    for(size_t i = 0; i < N; i++){
        printf("%lf %lf\n", art[i].x, art[i].y);
        printf("%lf %lf %lf\n", art[i].x, art[i].y, dist(art[i], O));

    }
}



int main(int argc, char *argv[]){
    //set up array point
    points* arr = malloc(N*sizeof(points));
    
    // {-1.000, 1.000}
    for(size_t i = 0; i < N; i++){
        (*(arr+i)).x = (-1000 + rand() % 2001)/1000.;
        (*(arr+i)).y = (-1000 + rand() % 2001)/1000.;
       /* (*(arr++)) = {
            (-1000 rand() % 2001)/1000.,
            (-1000 rand() % 2001)/1000.
        };
        */
        //arr[i].x=(-1000 rand() % 2001)/1000.;
 
    }
        

    //qsort(arr_p, 5, sizeof(int),compare_ints__inc);
    qsort(arr,N,sizeof(points), compare_ints__inc);
    print_arr(arr, N);
    
    printf("\n");

    qsort(arr, N, sizeof(points), compare_ints__dec);
    print_arr(arr, N);

    printf("\n");

    qsort(arr, N, sizeof(points), compare_dist);
    print_arr(arr, N);

    free(arr);
    return 0;
    
}