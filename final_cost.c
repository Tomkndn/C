#include<stdio.h>
int main(){
    float A[3];
    printf("Enter Price for 3 items: ");
    scanf("%f   %f  %f", &A[0], &A[1], &A[2]);
    float P =A[0]*0.18;
    float M = A[0]+P;

    float Q =A[1]*0.18;
    float N = A[1]+Q;

    float R =A[2]*0.18;
    float O = A[2]+R;

    printf("Your Individual Price for %.2f %.2f %.2f is %.2f %.2f %.2f.\n",A[0],A[1],A[2],M,N,O); 
    printf("Your Total Price for %.2f %.2f %.2f is %.2f.", A[0],A[1],A[2],M+N+O); 
    return 0;
}