#include <stdio.h>


int main(int argc, char *argv[]) {
    int odd_even;
    int num;

    printf("Even or Odd number you want: ");
    scanf("%d", &odd_even);
    printf("How many numbers you want to show: ");
    scanf("%d", &num);

    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (odd_even == 0 && i%2 != 0){
            continue;
        } else if(odd_even == 0 && i%2 ==0 ){
            printf("%d\n", i);
            count++;
        } // end of even if
        
        if (odd_even == 1 && i%2 == 0){
            continue;
        } else if (odd_even == 1 && i%2 !=0){
                printf("%d\n", i);
                count++;
        } //end of odd if
      
        if (count == num) {
            break;
        } // break a program if              
    }// end of for loop


    return 0;
}//End of main()