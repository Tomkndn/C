#include <stdio.h>

float science(float n, float m){
    float Res = (n/m)*100.0;
    return Res;
}

float math(float n, float m){
    float Res = (n/m)*100.0;
    return Res;
}

float sanskrit(float n, float m){
    float Res = (n/m)*100.0;
    return Res;
}

int main(){
    char A;
    printf("<<Enter Your Subject>>\n");
    printf("Enter 's' for Science, 'm' for Math and 'k' for Sanskrit: ");
    scanf("%c", &A);
    if (A == 's')
    {
        float B,C;
        printf("Enter your obtained marks: ");
        scanf("%f", &B);
        printf("Enter Full Marks: ");
        scanf("%f", &C);
        printf("Your Obtained percentage in Science is: %.2f", science(B,C));
    }else if(A == 'm'){
        float B,C;
        printf("Enter your obtained marks: ");
        scanf("%f", &B);
        printf("Enter Full Marks: ");
        scanf("%f", &C);
        printf("Your Obtained percentage in Math is: %.2f", math(B,C));
    }else if (A == 'k')
    {
        float B,C;
        printf("Enter your obtained marks: ");
        scanf("%f", &B);
        printf("Enter Full Marks: ");
        scanf("%f", &C);
        printf("Your Obtained percentage in Sanskrit is: %.2f", sanskrit(B,C));
    }   
}