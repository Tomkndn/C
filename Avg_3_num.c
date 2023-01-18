#include <stdio.h>
int main(){
    int A, B, C;

    printf("Enter First number: ");
    scanf("%d", &A);

    printf("Enter Second number: ");
    scanf("%d", &B);

    printf("Enter Third number: ");
    scanf("%d", &C);
    
    int Res = A + B + C;
    printf("Average of 3 number is %.2f", Res/3.0);
    return 0; 
}