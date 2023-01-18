#include <stdio.h>
#include<ctype.h>
int main(){
    // char cha;
    // printf("Enter your Character: ");
    // scanf("%c", &cha);

    // if (isdigit(cha))
    //     printf("The Given character is Digit.");
    // else
    //     printf("OOPS!!! You enetered the Character");
    
     //to find whether input is integer or alphabet
    char input;
    printf("Enter :");
    scanf("%c",&input);
    if ((input >= 'a' && input <= 'z' )||(input >= 'A' && input <= 'Z' ))
    {
        printf("\n %c is an Alphabet",input);
    }
    else if (input >= '0' && input <= '9' )
    {
        printf("\n %c is a Digit",input);
    }
    return 0;
}