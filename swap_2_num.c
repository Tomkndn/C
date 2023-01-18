#include<stdio.h>
void swap(int *n, int *m);

int main(){
    int A,B;
    printf("Enter Your Numbers: ");
    scanf("%d   %d",&A,&B);
    printf("Your Number is : %d %d\n",A,B);
    swap(&A,&B);
    return 0;
}

void swap(int *n, int *m){
    int Q = *n;
    *n = *m;
    *m = Q;
    printf("My Number is : %d %d",*n,*m);
}