#include<stdio.h>
int main(){
    int in;
    printf("Enter your table input: ");
    scanf("%d", &in);
    if (in == 0)
    {
        printf("Wrong Table input!!!!");
        return 0;
    }
    
    int table[in][10];
    for (int i = 0; i < in; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = (i+1)*(j+1);
        }
        // printf("\n");
    }
    for (int i = 0; i < in; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("  %d ",table[i][j]);
        }
        printf("\n");    
    }
    return 0;
}