//program to search an element in a linked list
#include<stdio.h>
#include<stdlib.h>

//using structure to form a model of a node
typedef struct Node{
    int data;
    struct Node *link;
} node;

node *head,*ptr;

//function to create a linkedlist
void linkedListCreation()
{
    int i,n;
    printf("\n---------------LINKED LIST---------------\n");
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    head=ptr=NULL;
    for(i=1;i<=n;i++)
    {
        node *new=malloc(sizeof(node));
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
    printf("\nThe linked list is: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

//function to search an element in a linkedlist using linearsearch
void linkedlistLinerSearch()
{
    int i,ele,count=1,flag=0;
    printf("\n\nEnter the element you want to search: ");
    scanf("%d",&ele);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==ele)
        {
            printf("\n%d is found in position %d",ele,count);
            flag=1;
        }
        count++;
        ptr=ptr->link;
    }
    if(flag==0)
        printf("Element not found");
}

//main function
int main()
{
    linkedListCreation();
    linkedlistTraversion();
    linkedlistLinerSearch();
    return 0;
}