//program to delete an element in linked list at any position

#include<stdio.h>
#include<stdlib.h>

//using structure to form a model of a node
typedef struct Node
{
    int data;
    struct Node *link;
} node;

node *head,*ptr,*nptr;

//function to create a linkedlist
void linkedListCreation()
{
    int n,i;
    node *new;
    printf("\n---------------LINKED LIST---------------\n\n");
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
    printf("%d is deleted",item);
    ptr=head;
    printf("\nThe linked list is: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

//function to delete an element at the beginning of the linkedlist
void linkedListDeletionBeginning()
{
    int item;
    ptr=head;
    item=ptr->data;
    printf("%d is deleted",item);
    head=ptr->link;
    linkedListTraversion();
}

//function to insert an element at the end of the linkedlist
void linkedListDeletionEnd()
{
    ptr=head;
    while(ptr->link!=0)
        nptr->link=ptr;
        ptr=ptr->link;   
    nptr->link=NULL;
    linkedListTraversion();
}

//function to insert an element at the given position in the linkedlist
void linkedListDeleteionPos()
{
    node *new;
    ptr=head;
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    int pos,i;
    printf("Enter the position at which you want to insert: ");
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
void linkedListDeletionEle()
{
    node *new;
    ptr=head;
    //memory allocation using malloc
    new= (node*)malloc(sizeof(node));
    int ele;
    printf("Enter the element after which you want to insert: ");
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
void linkedlistDeletion()
{
    int choice;
    while(choice<5)
    {
        printf("\n-----------------INSERTION-----------------\n");
        printf("\nEnter 1 to delete the element at the beginning");
        printf("\nEnter 2 to delete the element at the end");
        printf("\nEnter 3 to delete the element at a particular position");
        printf("\nEnter 4 to delete a particular element");
        printf("\nEnter any other number to stop deletion\n");

        scanf("%d",&choice);
        //using switch to switch between insertion methods
        switch(choice)
        {
            case 1:
            linkedListDeletionBeginning();
            break;

            case 2:
            linkedListDeletionEnd();
            break;

            case 3:
            linkedListDeleteionPos();
            break;

            case 4:
            linkedListDeletionEle();

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
    if(head==NULL)
        printf("UNDERFLOW: There is no element left in the linked list");
    else
        linkedlistDeletion();
    return 0;
}
