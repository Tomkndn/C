#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// for integer stack put data type to %d and for string change to %s/%c.

int top=-1, max;
char stack[100];
void push(){
    top++;
    if (top==max){
        printf("\nStack is OverFlow\n");
    }else{
        printf("\nEnter your element for pushing: ");
        scanf("%s",&stack[top]);
    }
}
void pop(){
    if (top==-1)
    {
        printf("\nStack is UnderFlow\n");
    }else{
        printf("\nYour popped element is : %s",stack[top]);
        top--;
    }
}
void display(){
    printf("\nYour stack is : ");
    for (int i = 0; i <= top; i++)
    {
        printf("%c ",stack[i]);
    }
}
void reverse(){
    printf("\nYour stack is : ");
    for (int i = top; i >= 0; i--)
    {
        printf("%c ", stack[i]);
    }
}
int main(){
    int input,temp = true;
    printf("\nEnter the length of stack: ");
    scanf("%s",&max);
    do
    {
        printf("\nEnter Valid Options:\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.Reverse Display\n");
        printf("5.END\n");
        printf("Enter Your Choice: ");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            reverse();
            break;
        case 5:
            temp = false;
            printf("\nThanks for using my code.");
            break;
        default:
            printf("\nINVALID OPTION!!!");
            break;
        }
    } while (temp);
    
}