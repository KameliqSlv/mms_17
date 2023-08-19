/*

    Stack :: Lesson 3

*/

#include <inttypes.h>
void outerFunction();
void innerFunction();

int main(int argc, char* argv[]){

    outerFunction();
    

    return 0;
}//end of main()


void outerFunction(){
    int outerVariable = 10;
    innerFunction();
}//end of outerFunction()


void innerFunction(){
    int innerVariable = 20;
    

}//end of innerFunction()
