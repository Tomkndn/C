#include<stdio.h>
int fac(int n,int *f){
    if (n == 0)
    {
        return 1;
    }else if (n == 1)
    {
        return 1;
    }
    *f =1;
    int Res = fac(n-1,f)*n;
    return Res;
    // for(int i=1;i<=n;i++)
    // *f=*f*i;
    // return *f;
}
int main(){
    int A,B;
    printf("Enter your Number: ");
    scanf("%d", &A);
    printf("Your %d factorial is: %d",A,fac(A,&B));
    return 0;
}
