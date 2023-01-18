#include <stdio.h>
// Function Declaration
void first();
void second();

int main(){
    first();    //Function Call
    second();   //Function Call
}

//Function Definition
void first(){
    printf("Hello World \n");

}
void second(){
    printf("Good Bye!!");
}