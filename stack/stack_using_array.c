#include <stdio.h>
#define  N 5
int top=-1;
int stack[N];
void push()
{
    int x;
    printf("\nEnter data to push: ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Overflow");
    }
    else
        {
            top++;
            stack[top]=x;
            printf("%d is pushed into the stack",x);
        }
}

void pop()
{
    int item;
    if(top==-1)
        ("Underflow");
    else
    {
        item=stack[top];
        printf("%d is popped",item);
        top=top-1;
    }
    
}

void peek()
{
    if(top==-1)
        printf("Underflow");
    else
        printf("%d is the topmost element",stack[top]);
}

void display()
{   
    int i;
    if(top==-1)
        printf("Underflow");
    else
    {
        printf("The stack is: ");
        for(i=top;i>=0;i--)
            printf("%d ",stack[i]);
    }
}

void main()
{
    int choice,n;
    printf("\n----------------STACK USING ARRAY----------------\n") ;
    start:
    printf("\n\nEnter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for peek\n");
    printf("Enter 4 for display\n");
    printf("Enter any other key to exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        push();
        goto start;

        case 2:
        pop();
        goto start;

        case 3:
        peek();
        goto start;

        case 4:
        display();
        goto start;

        default:
        printf("\nInvalid choice\nExiting the program!!!");
        break;
    }
}