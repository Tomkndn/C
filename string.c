#include<stdio.h>

void prinfun(char arr[]);
int length(char arr[]);

int main(){
    char str[100];
    char ch;
    int i = 0;
    printf("Input Your String: ");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    char shortName[50];
    char fullName[100];
    printf("Enter your full name: ");
    fgets(fullName, 100, stdin);
    // printf("Your Full Name is: ");
    puts(fullName);

    printf("Enter your short name: ");
    scanf("%s", shortName);
    printf("Your Short name is: ");
    prinfun(shortName);
    printf("Your Length of Full Name is(with space): %d ",length(fullName));
    printf("\nYour Length of Full Name is: %d ",length(shortName));
    printf("\nYour Length of String is(with space): %d ",length(str));
    // printf("HELLO!!!");
    return 0;
}

void prinfun(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    
}

int length(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
}