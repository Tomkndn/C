#include<stdio.h>
int rev(int n[]){
    for (int i = 4; i >=0; i--)
    {
        printf("%d ", n[i]);
    }
}
int main(){
    int A[5];
    printf("Enter Your Array:  ");
    scanf("%d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]);
    printf("Your Array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Your Reverse Array is : ");
    rev(A);
    return 0;
}