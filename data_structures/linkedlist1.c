#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    struct node *head, *newnode,*temp;
    head=0;
    int choice;
    while(choice)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d",newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
        temp->next=newnode; 
        temp=newnode; 
        }
        printf("Do you want to continue ? (0/1)\n");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}