//This program is used to traverse and print a linkedlist (Elements taken as input)

#include<stdio.h>
#include<stdlib.h>

//typedefining struct node to node, so that we can call them easily using node
typedef struct node 
{
    int data;

    //self referencial structure, here we cannot use short form node
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

//function to print linkedlist
void linkedlistTraversion()
{
    ptr=head;
    printf("\nThe linked list after traversion is: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}


//main function
int main()
{
    //calling the function to create linked list
    linkedlistCreation();
    //calling the function to print the linked list
    linkedlistTraversion();
    return 0;
}