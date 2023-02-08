#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *head,*newnode,*temp,*ptr,*ptrprev;

void linkedListTraversion()
{
    ptr=head;
    printf("\nThe linked list is: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

void linkedListInsertionBeginning()
{
    node *new;
    new= (node*)malloc(sizeof(node));
    printf("\nEnter the number to insert at beginning: ");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    linkedListTraversion();
}

void linkedListInsertionEnd()
{
    node *new;
    ptr=head;
    new= (node*)malloc(sizeof(node));
    printf("Enter the number to insert at end: ");
    scanf("%d",&new->data);
    if(ptr->next!=0)
        ptr=ptr->next;    
    ptr->next=new;
    new->next=NULL;
    linkedListTraversion();
}

void linkedListInsertionAfter()
{
    node *new;
    ptr=head;
    new= (node*)malloc(sizeof(node));
    int pos,val,i;
    printf("Enter the position after which you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the value you want to insert: "); 
    scanf("%d",&val);
    new->next=NULL;
    for(i=1;i<pos;i++)
        ptr=ptr->next;
    new->next=ptr->next;
    ptr->next=new;
    ptr->data=val;
    linkedListTraversion();
}


void linkedlistInsertion()
{
    int choice;
    printf("\n-----------------INSERTION-----------------\n");
    printf("\nEnter 1 to insert at beginning");
    printf("\nEnter 2 to insert at end");
    printf("\nEnter 3 to insert after an element");
    printf("\nEnter 4 to insert at a position\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        linkedListInsertionBeginning();
        break;

        case 2:
        linkedListInsertionEnd();
        break;

        case 3:
        linkedListInsertionAfter();
        break;

        //case 4:
        //linkedListInsertionPosition();
    }
}

int main()
{
    int n,i;
    printf("\n---------------LINKED LIST---------------\n\n");
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    head=NULL;
    for(i=1;i<=n;i++)
    {
        newnode=malloc(sizeof(node));
        printf("Enter data %d: ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
            head=newnode;
        else
            temp->next=newnode;
        temp=newnode;
    }
    linkedListTraversion();
    linkedlistInsertion();
    return 0;
}
