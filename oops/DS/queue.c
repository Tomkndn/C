#include <stdio.h>

int top = -1, max, bottom = -1;
int stack[100];

void enqueue(){
    if (bottom == -1) {
        bottom++;
    }
    top++;
    if (top==max)
    {
        printf("\nQueue is OVERFLOW!!!\n");
    }else{
        printf("\nEnter your element for enqueue: ");
        scanf("%d", &stack[top]);
    }
}

void dequeue(){
    if (bottom == -1 || bottom == top)
    {
        printf("\nQueue is UNDERFLOW!!!\n");
    }else{
        printf("\nYour dequeued element is: %d\n",stack[bottom]);
        bottom++;
    }

}

void display(){
    printf("\nYour current queue is:");
    for (int i = bottom; i < max; i++) {
        printf(" %d ",stack[i]);
    }
}

void reverse(){
    printf("\nYour reverse queue is:");
    for (int i = max-1; i >= bottom; i--) {
        printf(" %d ",stack[i]);
    }

}

int main()
{
    int input, temp = 1;
    printf("\nEnter the length of queue: ");
    scanf("%d", &max);
    do
    {
        printf("\nEnter Valid Options:\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.REVERSE\n");
        printf("5.TOP\n");
        printf("6.BOTTOM\n");
        printf("7.END\n");
        printf("Enter Your Choice: ");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            reverse();
            break;
        case 5:
            printf("\nYour Top value is %d. \n",top);
            break;
        case 6:
            printf("\nYour Bottom value is %d. \n",bottom);
            break;
        case 7:
            temp = 0;
            printf("\nThanks for using my code.\n");
            break;
        default:
            printf("\nINVALID OPTION!!!\n");
            break;
        }
    } while (temp);
}