#include <stdio.h>
int main(){
    int A;
    int B;
    printf("Start Searching from number: ");
    scanf("%d", &A);
    printf("Start Searching upto number: ");
    scanf("%d", &B);

    for (int i = A; i <= B; i++ )
    {
        
        if ( i % 2 != 0)
        {
            printf("%d\n", i);
        }else {
            continue;
        }
        
    }
    return 0;
}