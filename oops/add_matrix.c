#include<stdio.h>
int main(){
    // Taking input.
    int row1,col1;
    printf("Input rows and columns for 1st Square matrix: ");
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
    int row2,col2;
    printf("Input rows and columns for 2nd Square matrix: ");
    scanf("%d %d",&row2,&col2);
    int B[row2][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &B[i][j]);
        }  
    }
    // Printing Matrix.
    printf("Your 1st Matrix is:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        
    }
    printf("Your 2nd Matrix is:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
        
    }
    int C[row1][col2];
    if (row1!=row2 || col1!=col2)
    {
        printf("Invalid Operations as the rows and columns are not equal for 2 matrix.");
    }else{
        printf("Your sum Matrix is:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ",C[i][j]);
            } 
            printf("\n"); 
        }

    }
    
}    