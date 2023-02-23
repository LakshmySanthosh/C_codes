//program to insert an element in linked list at any position

#include<stdio.h>
#include<stdlib.h>

//using structure to form a model of a node
typedef struct node
{
    int data;
    struct node *link;
} node;

node *head,*ptr,*new;

//function to create a linkedlist
void linkedlistCreation()
{
    int n,i;
    printf("\n---------------LINKED LIST---------------\n");
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    head=ptr=NULL;
    for(i=1;i<=n;i++)
    {
        new=malloc(sizeof(node));
        printf("Enter data %d: ",i);
        scanf("%d",&new->data);
        new->link=NULL;
        if(head==NULL)
            head=new;
        else
            ptr->link=new;
        ptr=new;
    }
}
//function for traversing and printing a linkedlist
void linkedlistTraversion()
{

    ptr=head;
    printf("\nThe linked list is: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

//function to insert an element at the beginning of the linkedlist
void linkedlistInsertionBeginning()
{
    //memory allocation using malloc
    new= malloc(sizeof(node));
    printf("\nEnter the number to insert at beginning: ");
    scanf("%d",&new->data);
    new->link=head;
    head=new;
    linkedlistTraversion();
}

//function to insert an element at the end of the linkedlist
void linkedlistInsertionEnd()
{
    ptr=head;
    //memory allocation using malloc
    new= malloc(sizeof(node));
    printf("\nEnter the number to insert at end: ");
    scanf("%d",&new->data);
    while(ptr->link!=NULL)
        ptr=ptr->link;    
    ptr->link=new;
    new->link=NULL;
    linkedlistTraversion();
}

//function to insert an element after the given position in the linkedlist
void linkedlistInsertionAfterPos()
{
    ptr=head;
    //memory allocation using malloc
    new= malloc(sizeof(node));
    int pos,i;
    printf("\nEnter the position after which you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&new->data);
    for(i=1;i<pos;i++)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
    linkedlistTraversion();
}

//function to insert an element at the given position in the linkedlist
void linkedlistInsertionAtPos()
{
    ptr=head;
    //memory allocation using malloc
    new= malloc(sizeof(node));
    int pos,i;
    printf("\nEnter the position at which you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&new->data);
    for(i=1;i<pos-1;i++)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
    linkedlistTraversion();
}

//function to insert an element after the given element in the linkedlist
void linkedlistInsertionAfterEle()
{
    ptr=head;
    //memory allocation using malloc
    new= malloc(sizeof(node));
    int ele;
    printf("\nEnter the element after which you want to insert: ");
    scanf("%d",&ele);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&new->data);
    while(ptr->data!=ele)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
    linkedlistTraversion();
}

//function for insertion, this displays the options by which insertion can be done
void linkedlistInsertion()
{
    int choice=1;
    while(choice<6)
    { 
        printf("\n\n-----------------INSERTION-----------------\n");
        printf("\nEnter 1 to insert at beginning");
        printf("\nEnter 2 to insert at end");
        printf("\nEnter 3 to insert after a position");
        printf("\nEnter 4 to insert at a position");
        printf("\nEnter 5 to insert after an element");
        printf("\nEnter any other number to stop insertion\n");
        scanf("%d",&choice);
        //using switch to switch between insertion methods
        switch(choice)
        {
            case 1:
            linkedlistInsertionBeginning();
            break;

            case 2:
            linkedlistInsertionEnd();
            break;

            case 3:
            linkedlistInsertionAfterPos();
            break;

            case 4:
            linkedlistInsertionAtPos();
            break;

            case 5:
            linkedlistInsertionAfterEle();
            break;

            default:
            printf("\n----------Program Terminated----------\n\n");
        }
    }
}

//main function
int main()
{
    linkedlistCreation();
    linkedlistTraversion();
    linkedlistInsertion();
    return 0;
}
