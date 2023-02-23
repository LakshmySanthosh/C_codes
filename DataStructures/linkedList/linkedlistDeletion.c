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
    ptr=head;
    printf("\nThe linked list is: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

//function to delete the element at the beginning of the linkedlist
void linkedListDeletionBeginning()
{
    int item;
    ptr=head;
    item=ptr->data;
    printf("\n%d is deleted\n",item);
    head=ptr->link;
    linkedListTraversion();
}

//function to delete the element at the end of the linkedlist
void linkedListDeletionEnd()
{
    int item;
    ptr=head;
    while(ptr->link!=0)
    {
        nptr=ptr;
        ptr=ptr->link;
    }
    item=ptr->data; 
    printf("\n%d is deleted\n",item);
    nptr->link=NULL;
    linkedListTraversion();
}

//function to delete an element from the given position in the linkedlist
void linkedListDeleteionPos()
{
    int pos,item,i;
    ptr=head;
    printf("Enter the position at which you want to delete: ");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        nptr=ptr;
        ptr=ptr->link;
    }
    item=ptr->data;
    nptr->link=ptr->link;
    printf("\n%d is deleted\n",item);
    linkedListTraversion();
}

//function to delete an element from the linkedlist
void linkedListDeletionEle()
{
    int ele;
    ptr=head;
    printf("Enter the element which you want to delete: ");
    scanf("%d",&ele);
    while(ptr->data!=ele)
    {
        nptr=ptr;
        ptr=ptr->link;
    }
    nptr->link=ptr->link;
    printf("\n%d is deleted\n",ele);
    linkedListTraversion();
}

//function for deletion, this displays the options by which deletion can be done
void linkedlistDeletion()
{
    int choice=1;
    while(choice<5)
    {
        if(head==NULL)
        {
            printf("\nUNDERFLOW: There is no element left in the linked list\n");
            break;
        }
        else
        {
            printf("\n\n-----------------DELETION-----------------\n");
            printf("\nEnter 1 to delete the element at the beginning");
            printf("\nEnter 2 to delete the element at the end");
            printf("\nEnter 3 to delete the element at a particular position");
            printf("\nEnter 4 to delete a particular element");
            printf("\nEnter any other number to stop deletion\n");

            scanf("%d",&choice);
            //using switch to switch between deletion methods
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
                break;

                default:
                printf("\n----------Program Terminated----------\n\n");
            }
        }
    }
}

//main function
int main()
{
    linkedListCreation();
    linkedListTraversion();
    linkedlistDeletion();
    return 0;
}
