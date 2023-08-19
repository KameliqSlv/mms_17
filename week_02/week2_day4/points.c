#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
    
/*
    za kontrolno
    simvolni nizowe 
    tazi zadacha
    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

typedef struct{
    double x;
    double y;
} Points;

double distance(double ax, double ay, double bx, double by){
    //return sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
}

double dist(Points p1, Points p2){
    double dX = p1.x - p2.x,
            dY = p1.y - p2.y;
    return sqrt(pow(dX, 2) + pow(dY, 2));
}

int main(int argc, char* argv[]){
    if(argc != 2){
        fprintf(stderr, "Invalid nummber of argument\n");
        return 1;
    }

    unsigned int n;
    if(sscanf(argv[1], "%u", &n) != 1){
        fprintf(stderr, "Invalid nummber of argument\n");
        return 1;
    }


    Points p[n];
    printf("Sizeof{Points} = %lu\n", sizeof(Points));
    printf("Sizeof p = %lu \n", sizeof(p));


    for(size_t i = 0; i < n; i++){
        p[i].x = (rand()% 1000)/1000.;
        p[i].y = (rand()% 1000)/1000.;
    }

    for(size_t i = 0; i < n; i++){
       printf("%lf %lf \n", (*(p + i)).x, (*(p + i)).y);

    }

    printf("\n");

    for(size_t i = 0; i<n; i++){
        for(size_t j = i+1; j < n; j++){
            printf("%lf \n", dist(p[i], p[j]));
        }
    }
}