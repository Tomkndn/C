#include<stdio.h>


void square(float A);
void rectangle(float A, float B);
void circle(float A);


int main(){
    char A;
    int B,C,D,E;
    printf("<<Finding the Area of Square, Rectangle or Circle!!!!.>>\n");
    printf("Enter s for Square, r for Rectangle, c for Circle: ");
    scanf("%c", &A);

    if (A == 's')
    {
        printf("Enter the sides for Square: ");
        scanf("%d", &B);
        square(B);
    }else if (A == 'r')
    {
        printf("Enter the sides for Rectangle: ");
        scanf("%d %d", &B, &D);
        // printf("Enter the second side for Rectangle: ");
        // scanf("%d", &D);
        rectangle(B, D);
    }else{
        printf("Enter the radius for Circle: ");
        scanf("%d", &E);
        circle(E);
    }
    return 0;
}

void square(float A){
    float X = A*A;
    printf("Your Area is %.2f", X);
}
void rectangle(float A, float B){
    float X =  A*B ;
    printf("Your Area is %.2f", X);
}
void circle(float A){
    float X = 3.14*A*A;
    printf("Your Area is %.2f", X);
}