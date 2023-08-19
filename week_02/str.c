#include <stdio.h>
//#include <string.h>

int my_strlen(char *str); // връща дължината на символния низ
void my_strcpy(char *dest, char *src); // копира сцр в деск
void my_strcat(char *dest, char *src); // добавя срц към края на деск
int my_strcmp(char * str1, char * str2); // сравнява стр1 и стр2
//Връща 0, ако стр1 и стр2 са еднакви
//Числото „0, ако първия симво в който стр1 и стр2 се различават е по малък
// Числото “0 ако първия символ, в който стр1 и стр2 се различават 

int main(int argc, char *argv[]) {
    char str[] = "Kami";
    int len = my_strlen(str);
    printf("Len at str is : %d\n\n", len);

    char str1[100] = "asddfgh",str2[100] = "Hello"; 
    my_strcpy(str1, str2);
    printf("CPY : %s\n", str1);

    char str3[] = "Hello", str4[] = "World";
    my_strcat(str3, str4);
    printf("CAT : %s\n", str3); 

    char str5[] = "Hello", str6[] = "Hello";
    printf("CMP : %d\n", my_strcmp(str5, str6));


    /*
        int a;
        const int *p = &a;
        // Pointer to const int 
        p++;
        // *p = 100: error
        int * const p = &a;
        //const pointer
        *p = 100; //Ok
        //p++ //Error

        const int * const p = &a;
        //const pointer to const
        //*p = 100; // error
        // p++; //error
    */

}

int my_strlen(char *str){
    int i = 0;
    while(str[i]!= '\0'){
        i++;
    }
    return i;
}

void my_strcpy(char *dest, char *src){
    while(*src){
        *(dest++) = *(src++);
        
        //*dest = *src;
        //desr++;
        // src++
    }
    *dest = '\0';
    
    /*
    int i =0;
    while(src[i]!= '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Str2(destination) is %s copy of source\n", dest);
    */
}

void my_strcat(char *dest, char *src){
    //dest += my_strlen(dest);
   
    dest = dest + my_strlen(dest);
    while(*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    //while(*src){
      //  *(dest++) = *src++;
        
        //*dest = *src;
        //desr++;
        // src++
    //}
    //*dest = '\0';
    /*int i =0, j =0;
    while(src[i]!= '\0'){
        i++;
        while(dest[j] != '\0'){
            src[i] = dest[j];
            j++;
            i++;
        }
    }
    src[i] = '\0';
    printf("Str2(destination) is %s copy of source\n", src);
    */
}

int my_strcmp(char *str1, char *str2){
    //str1: helloooo\0qwe
    //str2: helloooo\0qwe
    while(*str1 == *str2 && *str1){
        str1++;
        str2++;
    } 
    return *str1 - *str2;
}