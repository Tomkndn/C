#include <stdio.h>

int fac(int n);

int main(){
    int A;
    printf("Enter the number for factorial: ");
    scanf("%d", &A);
    printf("Your Factorial is %d.", fac(A));
    return 0;
}

int fac(int n){
    if (n == 0){
        return 1;
    }else if (n == 1){
        return 1;
    }
    int Res = fac(n-1)*n;
    return Res;
}