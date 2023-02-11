//program to insert an element in linked list at any position

#include<stdio.h>
#include<stdlib.h>

//using structure to form a model of a node
typedef struct Node
{
    int data;
    struct Node *link;
} node;
node *head,*ptr,*new;

//function to create a linkedlist
void linkedListCreation()
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
void linkedListTraversion()
{
    system("cls");
    ptr=head;
    printf("\nThe linked list is: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

//function to insert an element at the beginning of the linkedlist
void linkedListInsertionBeginning()
{
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    printf("\nEnter the number to insert at beginning: ");
    scanf("%d",&new->data);
    new->link=head;
    head=new;
    linkedListTraversion();
}

//function to insert an element at the end of the linkedlist
void linkedListInsertionEnd()
{
    ptr=head;
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    printf("\nEnter the number to insert at end: ");
    scanf("%d",&new->data);
    while(ptr->link!=0)
        ptr=ptr->link;    
    ptr->link=new;
    new->link=NULL;
    linkedListTraversion();
}

//function to insert an element after the given position in the linkedlist
void linkedListInsertionAfterPos()
{
    ptr=head;
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    int pos,i;
    printf("\nEnter the position after which you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&new->data);
    for(i=1;i<pos;i++)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
    linkedListTraversion();
}

//function to insert an element at the given position in the linkedlist
void linkedListInsertionAtPos()
{
    ptr=head;
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    int pos,i;
    printf("\nEnter the position at which you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&new->data);
    for(i=1;i<pos-1;i++)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
    linkedListTraversion();
}

//function to insert an element after the given element in the linkedlist
void linkedListInsertionAfterEle()
{
    ptr=head;
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    int ele;
    printf("\nEnter the element after which you want to insert: ");
    scanf("%d",&ele);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&new->data);
    while(ptr->data!=ele)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
    linkedListTraversion();
}

//function for insertion, this displays the options by which insertion can be done
void linkedListInsertion()
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
            linkedListInsertionBeginning();
            break;

            case 2:
            linkedListInsertionEnd();
            break;

            case 3:
            linkedListInsertionAfterPos();
            break;

            case 4:
            linkedListInsertionAtPos();
            break;

            case 5:
            linkedListInsertionAfterEle();
            break;

            default:
            printf("\n----------Program Terminated----------\n\n");
        }
    }
}

//main function
int main()
{
    linkedListCreation();
    linkedListTraversion();
    linkedListInsertion();
    return 0;
}
