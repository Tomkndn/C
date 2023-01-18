#include <stdio.h>
int main(){
    float rad;
    printf("Enter your radius:");
    scanf("%f", &rad);
    float SUM = 3.14 * rad * rad;
    printf("Area of the circle is: %.2f", SUM);
    return 0;
}