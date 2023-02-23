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
            new->link=NULL; 
        else   
            new->link=head;        
        head=new;
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
        item=ptr->data; 
        printf("\n%d is popped",item);
        head=ptr->link;
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
        ptr=head;
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
        printf("\nThe stack is: \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
    }
}

//main function - we are calling the above defined functions in the main function as per the input given by the user
void main()
{
    int choice=1,n;
    printf("\n-------------STACK USING LINKEDLIST------------\n") ;

    while(choice<5)
    {
        printf("\nEnter 1 for push\n");
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
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            default:
            printf("\nInvalid choice\nExiting the program!!!");
            break;
        }
    }
}