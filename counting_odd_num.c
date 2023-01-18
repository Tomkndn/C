#include<stdio.h>
int odd(int n[]){
    int Res = 0;
    for (int i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 0)
        {
            // return 0;
        }else{
            Res++;
        }
    }
    return Res;
}
int main(){
    int A[] ={1,2,3,4,5,6,7,8,9,10};
    printf("Your Array is:  ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }    
    printf("\n");
    printf("Total Number of Odd in the Array is : %d", odd(A));
    return 0;
}