// Write a program to calculate the area and the circumference of a
// circle by using radius as the input provided by the user.
#include<stdio.h>
int main(){
    float radius;
    printf("Enter your radius: ");
    scanf("%f",&radius);
    float area = radius*radius;
    float circum = 2*3.14*radius;
    printf("Your area is %.2f\n",area);
    printf("Your circumference is %.2f",circum);
    return 0;
}