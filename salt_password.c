#include<stdio.h>
#include<string.h>

char salty(char pass[]);
void slicing(char A[],int m, int n);

int main(){
    // Salting Password.
    char oldPass[100];
    printf("Input Your Password: ");
    scanf("%s",&oldPass);
    salty(oldPass);
    // fgets(oldPass,100,stdin);
    char salt[50] = "123";
    strcat(oldPass,salt);
    printf("Your new Password is: %s\n",oldPass);
    
    // Slicing.
    printf("Now!You are using slicing.\n");
    char old[100];
    int m,n;
    printf("Input your string: ");
    // fgets(old, 100, stdin);
    scanf("%s", old);
    printf("Slicing from: ");
    scanf("%d %d",&m,&n);
    slicing(old,m,n);
    return 0;
}

char salty(char pass[]){
    char newPass[100];
    char salt[50] = "123"; 
    strcpy(newPass, pass);
    strcat(newPass, salt);
    printf("Your new Password is: %s\n",newPass);
    
}

void slicing(char A[], int m, int n){
    char newString[50];
    for (int i = m, j = 0; i <= n; i++, j++)
    {
        // strcpy(newString[j], A[i]);
        newString[j] = A[i];
    }
    printf("Your new String is %s", newString);
}