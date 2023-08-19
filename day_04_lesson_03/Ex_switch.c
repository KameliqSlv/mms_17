#include <stdio.h>

int main(int argc, char* argv[]){
    char grade = 'A';

    switch (grade) {
        case 'A':{
            printf("Excellent \n");
            break;
        } 
        case 'B':{
            printf("Very Good \n");
            break;
        }
        case 'C':{
            printf("Good \n");
            break;
        }
        case 'D':{
            printf("Poor\n");
            break;
        }
        case 'F':{
            printf("Fail \n");
            break;
        }
        default:{
            printf("Invalid grade \n");
            break;
        }
        
    } // end of switch
    printf("Youre grade is %c \n", grade);


    return 0;
}// end of main()