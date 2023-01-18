#include <stdio.h>

int main(){
//  First Matrix
    int n,m;
    printf("Input rows and columns for First matrix: ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The %dth index of %dth element is: ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
        
    }
    

    // Second Matrix
    int a,b;
    printf("Input rows and columns of the Second matrix: ");
    scanf("%d %d",&a,&b);
    int B[a][b];
    if (m != a || n != b)
    {
        printf("OOPS!!! Your Matrix is not suitable for Addition!!!!.");
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("The %dth index of %dth element is: ",i,j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
        
    }
    // Printing the Matrix.
    printf("Your first Array is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        
    }
    printf("Your Second Array is:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
        
    }



    // Addition of Matrix
    int R[a][n];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < n; j++)
        {
            R[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
        
    }
    printf("Your Final Array is:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}