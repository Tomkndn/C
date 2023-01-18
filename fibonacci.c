#include <stdio.h>
int main(){
    int A;
    printf("Enter the serial number for Fibonacci Series: ");
    scanf("%d", &A);
    if (A == 0)
    {
        printf("OOPS!! You entered the wrong number.");

    }else if (A == 1)
    {
        printf("Your Fibonacci series is: 0 ");

    }else{
        printf("Your Fibonacci series is: 0 1 ");
        int B = 0;
        int C = 1;
        for (int i = 3; i <= A; i++)
        {
            int Res = B + C;
            printf("%d ", Res);
            B = C;
            C = Res;
        }
    }    
    return 0;
}