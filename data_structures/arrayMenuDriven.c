#include<stdio.h>

//Array creation block
int arrayCreation()
{

}
int main()
{
    int choice;
    // This is main menu
    printf("\n***YOUR PROGRAM STARTS HERE***\n");
    printf("Enter 1 for array creation\n");
    printf("Enter 2 for array traversion\n");
    printf("Enter 3 for deletion\n");
    printf("Enter 4 for insertion\n");
    printf("Enter 5 for searching\n");
    printf("Enter 6 for sorting\n");
    scanf("%d",&choice);

    // Switching starts here
    switch(choice)
    {
        case 1:
        arrayCreation();

        case 2:
        arrayTraversion();

        case 3:
        printf("Enter 1 for deletion at beginning\n");
        printf("Enter 2 for deletion at end\n");
        printf("Enter 3 for deletion after an element\n");
        printf("Enter 2 for deletion before an element\n");
        printf("Enter 3 for deletion at a specific position\n");
        scanf("%d",&choice);
        //nested switch
        switch(choice)
        {
            case 1:
            deletionBeginning();
            
            case 2:
            deletionEnd();

            case 3: 
            deletionAfter();

            case 4:
            deletionBefore();

            case 5:
            deletionPosition();
        }

        case 4:
        printf("Enter 1 for insertion at beginning\n");
        printf("Enter 2 for insertion at end\n");
        printf("Enter 3 for insertion after an element\n");
        printf("Enter 2 for insertion before an element\n");
        printf("Enter 3 for insertion at a specific position\n");
        scanf("%d",&choice);
        //nested switch
        switch(choice)
        {
            case 1:
            insertionBeginning();
            
            case 2:
            insertionEnd();

            case 3: 
            insertionAfter();

            case 4:
            insertionBefore();

            case 5:
            insertionPosition();
        }
        
        case 5:
        printf("Enter 1 for insertion at beginning\n");
        printf("Enter 2 for insertion at end\n");


    }
}


