//program to insert, delete, peek or display queue using linkedlist
#include <stdio.h>
#include<stdlib.h>

//using structure to form a model of a node
typedef struct node
{
    int data;
    struct node *link;
} node;

//initialise values
node *ptr,*front,*rear;

//function to insert data into the queue
void insert()
{
    int x;
    node *new;
    new=malloc(sizeof(node));
    if(new==NULL)
        printf("Overflow");
    else
    {
        printf("\nEnter data to insert: ");
        scanf("%d",&x);
        new->data=x; 
        new->link=NULL;
        if(front==NULL) 
        {
            front=new;
            rear=new;
            front->link=NULL;
            rear->link=NULL;
        }
        else
            rear->link=new;
            rear=new;
        printf("%d is inserted into the queue",x);
    }

}

//function to delete data from the queue
void delete()
{
    int item;
    if(front==NULL)
        printf("Underflow");
    else
    {
        ptr=front;
        item=front->data;
        front=front->link;
        free(ptr);
        printf("\n%d is deleted",item);
    }
}

//function to peek(view the topmost element) from the queue
void peek()
{
    if(front==NULL)
        printf("Underflow");
    else
        printf("\n%d is the element in front",front->data);
}

//function to display the elements of queue
void display()
{   
    int item;
    ptr=front;
    if((front==NULL))
        printf("Queue is Empty");
    else
    {
        printf("\nThe queue is: \n");
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
    int choice=1,n;
    printf("\n-------------queue USING LINKEDLIST------------") ;

    while(choice<5)
    {
        printf("\n\n---------MAIN MENU---------\n");
        printf("Enter 1 for insert\n");
        printf("Enter 2 for delete\n");
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
            insert();
            break;

            case 2:
            delete();
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