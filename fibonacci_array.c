#include<stdio.h>

int main(){
    int n;
    printf("Enter the term for fibonacci series: ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    if (n == 0)
    {
        printf("OOPS!!!<<Wrong input>>.");
    }else if (n == 1)
    {
        printf("Your final Series is: 0 ");
    }else
    {
        printf("Your final Series is: 0 1 ");
    }
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d ", fib[i]);
    }
    
    
    return 0;
}