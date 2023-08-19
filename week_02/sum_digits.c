#include <stdio.h>
#include <stdint.h>
#include <string.h>


//str 1234
//(((1*10 + 2)*10 + 3) +4
// atoi_rev('4321') = 4 +10 *atoi_rev ('321')
// atoi_rev('321') = 4 +10 *atoi_rev ('21')
// atoi_rev('21') = 4 +10 *atoi_rev ('1')
//str 4321

//str must be actual number, but revrsed
int atoi_reverse(const char* rev_string){
    if(!(*rev_string)){
        return 0;
    }return (*rev_string - '0') + atoi_reverse(rev_string + 1 )*10;
    
    //return atoi(str - "0" ) * 10;
}

void reverse(const char * str1, char * str2){
    str2 += strlen(str1);
    *str2 = '\0';
    while(*str1){
        *str2-- = *str1++;
    }
}
char* rev2(const char* str1){
    size_t n = strlen(str1);
    char res[n];
    for(int i=n; i<n; i++);
}

int atoi(char* str){
    return atoi(str);
}

//char *srt;->   1,2,3,4
//
//((((1*10)+2*10)+3*10)4*10)
// reverse str_rev 
// 4 3 2 1
//atoi_rev(str_rev) = 4 +atoi_rev(str_rev-1)*10


uint64_t sumDigits(uint64_t a){
    if(a < 10){
        return a;
    }else {
        //return a%10 + sumDigits(a/10);
        return sumDigits(a/10) + a%10;
    }
}
//sumDigit (12345) = sumDigit(12345/10) + 12345%10
int main(){

    char str1[10] = "1234";
    char str2[10];
    reverse(str1, str2);

    uint64_t a;
    scanf("%d",&a);
    uint64_t sum = 0, a_temp = a;

    while (a_temp){
        sum+=a_temp%10;
        a_temp /= 10;
    }
    printf("%d", sum);
}