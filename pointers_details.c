#include<stdio.h>


int main(){

    int m = 300;
    float fx = 300.60006;
    char cht = 'z';
    int *A = &m;
    float *B = &fx;
    char *C = &cht;

    // Using & operator.
    printf("Using & operator :\n");
    printf("--------------------\n");
    printf("address of m = %p\n", &m);                                                                                
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    // Using & and * operator.
    printf("Using & and * operator :\n");
    printf("--------------------\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n\n", *(&cht));

    // Using only Pointer variables.
    printf("Using only pointer variable :\n");
    printf("--------------------\n");
    printf("address of m = %p\n", A);
    printf("address of fx = %p\n", B);
    printf("address of cht = %p\n\n", C);

    // Using only Pointer variables.
    printf("Using only pointer operator :\n");
    printf("--------------------\n");
    printf("value at address of m = %d\n", *A);
    printf("value at address of fx = %f\n", *B);
    printf("value at address of cht = %c\n\n", *C);

    return 0;
}