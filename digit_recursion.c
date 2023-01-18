// write a program in C to count the digits of a given number with recursion.
#include<stdio.h>
int rec(int n){
    static int res = 0;
    if (n != 0)
    {
        res++;
        rec(n/10);
    }
    return res;
}

int main(){
    int A;
    printf("Enter Your Favourite Largest Number:  ");
    scanf("%d", &A);

    printf("Total Digits in Your Number is: %d", rec(A));
    return 0;
}