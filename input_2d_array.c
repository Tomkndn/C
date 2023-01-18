#include <stdio.h>
int main(){
    int A[2][4];
    printf("<<<Enter Your Array>>>\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The %dth index of %dth element is: ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
        
    }
    printf("Your Array is:");
    for (int i = 0; i < 2; i++)
    {
        printf("(");
        for (int j = 0; j < 4; j++)
        {
            printf("%d,",A[i][j]);
        }
        printf(")");
        
    }
    // Arr(A[2][4]);
    return 0;
}
// int Arr(int *A[][]);
// int Arr(int *A[][]){
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("The %dth index of %dth element is: %d \n",i,j, A[i][j]);
//         }
//         printf("\n");
        
//     }
// }