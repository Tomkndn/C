#include<stdio.h>
int main(){
    int A;
    printf("Enter the last number: ");
    scanf("%d", &A);
    for (int i = 1; i <=A; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d", i);
        printf("\n");    
    }
    return 0;  
}