#include<stdio.h>
int main(){
    // Taking input.
    int row1,col1;
    printf("Input rows and columns for Square matrix: ");
    scanf("%d %d",&row1,&col1);
    int A[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &A[i][j]);
        }
        
    }
    // Printing Matrix.
    printf("Your Matrix is:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        
    }
    
}    