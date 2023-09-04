#include <stdio.h>
int main(){
    int num1,num2,temp=1,init;
    printf("Enter the two number with space: ");
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
    {
        init = num2;
    }else{
        init = num1;
    }
    
    for (int i = init; i >= 1; i--)
    {
        if (num1%i==0 && num2%i==0)
        {
            temp = i;
            break;
        }  
    }
    printf("HCF of the two number be: %d",temp);
    
}