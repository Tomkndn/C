#include<stdio.h>
int main(){
    int a,b,sum=0;
    // float sum = 0.0;
    printf("How many inputs:");
    scanf("%d",&a);
    for (int i =0;i<a;i++){
        scanf("%d",&b);
        sum=sum+b;
    }
    printf("%d",sum);
    
}