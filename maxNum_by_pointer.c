#include<stdio.h>


int main(){
    int A, B;
    printf("Input First Number: ");
    scanf("%d", &A);
    printf("Input Second Number: ");
    scanf("%d", &B);
    int *C = &A;
    int *D = &B;
    if (*C > *D)
    {
        printf("%d  is the Maximum Number.", *C);
        
    }else{
        printf("%d  is the Maximum Number.", *D);
    }
    return 0;
}