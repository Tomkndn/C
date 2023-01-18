#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
    char A;
    printf("Enter 'i' for Indian/'f' for French: " );
    scanf("%c", &A);
    if ( A == 'i' )
    {
        Namaste();
    }else{
        Bonjour();
    }
    
}

void Namaste(){
    printf("Namaste!");
}
void Bonjour(){
    printf("Bonjour!");
}