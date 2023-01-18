#include <stdio.h>

int main(){
    int A[2][4] = {{5,6,4,7},{1,8,9,0}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The %dth index of %dth element is: %d \n",i,j, A[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}