#include <stdio.h>
int main(){
    int A;

    for (int i = 0; i < 2; )
    {
        printf("Enter Your Number: ");
        scanf("%d", &A);
        if ( A % 7 != 0 )
        {
            printf("OOPS!!! You entered the wrong multiple of 7. \n");

        }else {
            printf("Congartulations!!! You entered the multiple of 7.");
            break;
        }
        
    }
    
    return 0;
}