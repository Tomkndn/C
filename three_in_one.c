#include<stdio.h>
void three(int *n, int *m){
    int sum = *n + *m;
    int product = (*n)*(*m);
    int avg = (*n+*m)/2;
    printf("Sum is: %d\n", sum);
    printf("Product is: %d\n", product);
    printf("Average is: %d\n", avg);
}
int main(){
    int A,B;
    printf("Enter your number: ");
    scanf("%d   %d", &A, &B);
    three(&A,&B);
}