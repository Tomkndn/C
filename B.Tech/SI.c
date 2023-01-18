#include <stdio.h>
void main(){
    float p,r,t,d;

    // principle
    printf("Enter principle amount: ");
    scanf("%f",&p);
    
    // interest
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    
    // time period
    printf("Enter time period: ");
    scanf("%f",&t);
    
    // simple interest
    float si = (p*r*t)/100;
    printf("Your Si is: ");
    printf("%.2f\n",si);
    
    // interest discount
    printf("Interest discount (in percentage): ");
    scanf("%f",&d);
    
    // calculation
    float dis =(si * d)/100;
    float si2 = si - dis;
    printf("Your new interest is %.2f\n",si2);
    printf("Your total amount will be %.2f",si2+p);
    // return 0;

}