#include <stdio.h>
int top=-1, max, stack[100];
void push(){
    top++;
    if (top==max){
        printf("\nStack is OverFlow\n");
    }else{
        printf("\nEnter your element for pushing: ");
        scanf("%d",&stack[top]);
    }
}
void pop(){
    if (top==-1)
    {
        printf("\nStack is UnderFlow\n");
    }else{
        printf("\nYour popped element is : %d",stack[top]);
        top--;
    }
}
void display(){
    printf("\nYour stack is : \n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",stack[i]);
    }
}
int main(){
    int input,temp = 2;
    printf("\nEnter the length of stack: ");
    scanf("%d",&max);
    do
    {
        printf("\nEnter Valid Options:\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.END\n");
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
        default:
            // break;
            temp = 3;
            printf("\n  Thanks for using my code.");
        }
    } while (temp==2);
    
}