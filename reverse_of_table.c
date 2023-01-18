#include <stdio.h>
int main(){
    int A;
    printf("Enter the table: ");
    scanf("%d", &A);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", A,i,A*i );
    }
    return 0;
}