//program to push, pop, peek or display stack using array

#include <stdio.h>
#define  N 5

//initialise values
int top=-1;
int stack[N];

//function to push data into the stack
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

//function to pop data from the stack
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

//function to peek(view the topmost element) from the stack
void peek()
{
    if(top==-1)
        printf("Underflow");
    else
        printf("%d is the topmost element",stack[top]);
}

//function to display the elements of stack
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

//main function - we are calling the above defined functions in the main function as per the input given by the user
void main()
{
    int choice,n;
    printf("\n----------------STACK USING ARRAY----------------\n") ;
    
    //defining start for calling using goto function
    start:
    printf("\n\nEnter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for peek\n");
    printf("Enter 4 for display\n");
    printf("Enter any other key to exit\n");
    
    //taking choice as input
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    
    //using switch to go to the functions as per users choice
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