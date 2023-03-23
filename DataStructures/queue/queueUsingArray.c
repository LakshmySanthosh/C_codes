//program to insert, delete, peek or display queue using array

#include <stdio.h>
#define  N 50

//initialise values
int rear=-1, front=-1;
int queue[N];

//function to insert data into the queue
void insert()
{
    int x;
    printf("\nEnter data to insert: ");
    scanf("%d",&x);
    if(rear==N-1)
        printf("Overflow");
    else
    {
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=x;
        printf("%d is inserted into the queue",x);
    }
}

//function to delete data from the queue
void delete()
{
    int item;
    if(front==-1||front>rear)
        printf("Underflow");
    else
    {
        item=queue[front];
        printf("%d is deleted",item);
        front=front+1;
    }
    
}

//function to peek(view the element at front position) from the queue
void peek()
{
    if(front==-1||front>rear)
        printf("Underflow");
    else
        printf("%d is the element at front position",queue[front]);
}

//function to display the elements of queue
void display()
{   
    int i;
    if(front==-1||front>rear)
        printf("Queue is empty");
    else
    {
        printf("The queue is:\n");
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
}

//main function -we are calling the above defined functions in the main function as per the input given by the user
void main()
{
    int choice=1,n;
    printf("\n----------------QUEUE USING ARRAY----------------") ;
    
    while(choice<5)
    {
        printf("\n\n---------MAIN MENU---------\n");
        printf("Enter 1 for insertion\n");
        printf("Enter 2 for deletion\n");
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
