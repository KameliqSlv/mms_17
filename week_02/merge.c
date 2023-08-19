#include <stdio.h>


//Въвеждата се 2 цели положителни числа 
//използвайте побитови операции за да намерите цалочислени делене и остатък

void merge(int *arr1, int n1, int *arr2, int n2, int *dest){
    
    size_t i1 = 0, i2 = 0;
    while(i1 < n1 && i2 < n2){
        if(arr1[i1] < arr2[i2]){    //
            *(dest++) = arr1[i1];
            i1++;
        } else {
            *(dest++) = arr2[i2];
            i2++;
        }
    }

    if(i1 < n1){
        for(size_t i = i1; i < n1; i++){
            *(dest++) = arr1[i]; 
        }
        //arr3 = arr1 + i1;
    } else {
        for(size_t i = i2; i < n2; i++){
            *(dest++) = arr2[i]; 
        }
        //arr3 = arr2 + i2;
    }


    /*

    for(int i = 0; i < n1; i++){
        dest[i] = arr1[i];
        int min = dest[i];
        for (int j = 0; j < n2; j++){
            dest[j + n1] = arr2[j];
            for (int k = 0; k < n1 + n2; k++){
                if (dest[i] < dest[j]){
                    int temp = dest[i];
                    dest[i] = dest[min];
                    dest[min] = temp;
                }
            }
            
        }
            /*
            if(dest[j]< dest[min]){
                min = j;
            }
            */
        

    /*
        if(min != i){
            int temp = dest[i];
            dest[i] = dest[min];
            dest[min] = temp;
        }
        
        

    }

    */
}

int main(){
    //arr1 i arr 2 sa sortirani
    //arr2 i arr1 се сливат и резултата се записва в дест
    //1 5 8
    //3 7 10
    //1 3 5 7 8 10
    int arr1[] = {1,5,8, 9, 11, 15, 18 };
    int arr2[] = {3,7,10, 14};
    

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int dest[n1+n2];

    merge(arr1, n1, arr2, n2, dest);

    for(int i = 0; i < n1+n2;i++){
        printf("%d :: ", dest[i]);
    }

   printf("\n");

   return 0;

}