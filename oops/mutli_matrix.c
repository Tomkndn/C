#include<stdio.h>
int prit(int new[][], int row, int col){
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",new[i][j]);
        }
        printf("\n");
        
    }
} 
int main(){
    //  First Matrix
    int row1,col1;
    printf("Input rows and columns for First matrix: ");
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
    //  Second Matrix
    int row2,col2;
    printf("Input rows and columns for First matrix: ");
    scanf("%d %d",&row2,&col2);
    // Inputting the Wrong row.
    if (col1 != row2)
    {
        printf("OOPS!!! Your Matrix is not suitable for Multiplication!!!!.");
        return 0;
    }
    int B[row2][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &B[i][j]);
        }
        
    }
    prit(A,row1,col1);
    prit(B,row2,col2);
    
}   