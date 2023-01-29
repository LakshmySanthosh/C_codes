//This program is used to traverse and print a pre-defined linkedlist (Elements not taken as input)

#include<stdio.h>
#include<stdlib.h>


//typedefining struct Node to node, so that we can call them easily using node
typedef struct Node 
{
    int data;

    //self referencial structure, here we cannot use short form node
    struct Node *next;
} node;


//function to print linkedlist
void linkedListTraversion(node *ptr)
{
    printf("Elements of the linked list are: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}


//main function
int main()
{
    //initializing list members
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    //allocating memory using malloc
    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));

    //assigning values
    head->data=1;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=10;
    third->next=NULL;

    //calling the function to print list
    linkedListTraversion(head);
    return 0;
}