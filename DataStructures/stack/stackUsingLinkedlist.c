//program to push, pop, peek or display stack using linkedlist
#include <stdio.h>
#include<stdlib.h>

//using structure to form a model of a node
typedef struct node
{
    int data;
    struct node *link;
} node;

//initialise values
node *head,*ptr,*nptr;

//function to push data into the stack
void push()
{
    int x;
    node *new;
    new=malloc(sizeof(node));
    if(new==NULL)
        printf("Overflow");
    else
    {
        printf("\nEnter data to push: ");
        scanf("%d",&x);
        new->link=NULL;
        new->data=x;
        if(head==NULL)
            head=new;
        else
            ptr->link=new;
        ptr=new;
        printf("\n%d is pushed into the stack",x);
    }

}

//function to pop data from the stack
void pop()
{
    int item;
    if(head==NULL)
        ("Underflow");
    else
    {
        ptr=head;
        while(ptr->link!=NULL)
        {
            nptr=ptr;
            ptr=ptr->link;
        }
        item=ptr->data; 
        printf("\n%d is popped",item);
        nptr->link=NULL;
        
    }
}

//function to peek(view the topmost element) from the stack
void peek()
{
    ptr=head;
    int item;
    if(head==NULL)
        printf("Underflow");
    else
    {
        while(ptr->link!=NULL)
        {
            nptr=ptr;
            ptr=ptr->link;
        }
        item=ptr->data;
        printf("\n%d is the topmost element",item);
    }
}

//function to display the elements of stack
void display()
{   
    ptr=head;
    int item;
    if(head==NULL)
        printf("Underflow");
    else
    {
        printf("\nThe stack is: ");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}

//main function - we are calling the above defined functions in the main function as per the input given by the user
void main()
{
    int choice,n;
    printf("\n-------------STACK USING LINKEDLIST------------\n") ;
    
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