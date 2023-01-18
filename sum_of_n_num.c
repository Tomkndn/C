#include<stdio.h>

int sum(int n);

int main(){
    int A;
    printf("Enter the last number for summation: ");
    scanf("%d", &A);
    // sum(A);
    printf("Your Result is %d\n", sum(A));
}

int sum(int n){
    if (n == 1)
    {
        return 1;
    }else if(n == 0){
        printf("OOPS!!! You does not entered the natural number.");
    }
    
    int Res = sum(n-1) + n;
    // printf("Your Result is %d\n", Res);
    return Res;
}