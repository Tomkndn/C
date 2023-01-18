#include <stdio.h>
int main(){
    int A;
    for (int i = 0; i < 2; )
    {
        printf("Enter Your Number: ");
        scanf("%d", &A);
        if ( A % 2 ==0)
        {
            printf("OOPS!!! You entered bad even number. \n");

        }else {
            printf("Congartulations!!! You entered the odd number.");
            break;
        }
        
    }
    return 0;
}