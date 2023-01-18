#include <stdio.h>

float deg(float A);

int main(){
    float A;
    printf("Enter the temperature (in C): ");
    scanf("%f", &A);
    printf("Your Temperature(in F): %.2f", deg(A));
    return 0;
}

float deg(float A){
    // float Res = A*(9.0/5.0)+32.00;
    float Res = A*(0.18)+32.00;
    return Res;
}