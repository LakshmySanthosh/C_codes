//This program is used to traverse and print a linkedlist (Elements taken as input)

#include<stdio.h>
#include<stdlib.h>

//typedefining struct Node to node, so that we can call them easily using node
typedef struct Node 
{
    int data;

    //self referencial structure, here we cannot use short form node
    struct Node *next;
} node;

node *head;

//function to print linkedlist
void linkedListTraversion()
{
    node *ptr;
    ptr=head;
    printf("\nThe linked list after traversion is: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}


//main function
int main()
{
    //initializing values
    node *newnode,*ptr;
    int n,i;

    //taking number of elements as input
    printf("\n---------------LINKED LIST---------------\n\n");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=head=NULL;
    
    //taking the input elements
    printf("\nEnter the elements:\n");
    for(i=1;i<=n;i++)
    {
        //memory allocation using malloc
        newnode=(node*)malloc(sizeof(node));
        scanf("%d",&(newnode->data));
        newnode->next=NULL;
        
        if(head==NULL)
            head=newnode;
        else
            ptr->next=newnode;
        ptr=newnode;
    }

    //calling the function to print the linked list
    linkedListTraversion();
    return 0;
}