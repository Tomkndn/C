#include<stdio.h>
int main(){
    // int a,b;
    float c,a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    if (b == 0)
    {
        printf("Infinity");
    }else{
        c = a/b;
        printf("a/b is: %.2f" ,c);
    }
    return 0;
}