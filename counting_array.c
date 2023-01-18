#include<stdio.h>
#include<string.h>

void vowel(char newStr[], int n);
void finder(char old[], char P, int A);

int main(){

    // Counting Vowel.
    char string[100];
    printf("Enter your string in lower alphabets: ");
    // scanf("%s", string);
    fgets(string,100,stdin);
    int len = strlen(string);
    vowel(string, len);

    // finding a character.
    char str;
    printf("\nInput your charcter: ");
    scanf("%c",&str);
    finder(string, str, len);
    
    return 0;
}


void vowel(char newStr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (newStr[i] == 'a' || newStr[i] == 'e' || newStr[i] == 'i'|| newStr[i] == 'o'|| newStr[i] == 'u')
        {
            count++;
        }
        
    }
    printf("Your total vowel in the given string is: %d", count);   
}

void finder(char old[], char P, int A){
    int Res = 0;
    for (int i = 0; i < A; i++)
    {
        if (old[i] == P)
        {
            Res++;        
        }
        
    }
    printf("\nYour entered character is present %d times in the string.", Res);
     
}