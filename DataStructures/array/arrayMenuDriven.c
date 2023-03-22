#include<stdio.h>
int n,i,a[50];

//Array creation block
void arrayCreation()
{
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("\n- - - Array is created - - -");
}

void arrayTraversion()
{
    printf("The array is: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);  
    printf("\n- - - The array is traversed - - -"); 
}

void deletionBeginning()
{
    printf("The array before deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);  
    for(i=1;i<n;i++)
        a[i]=a[i+1];
    n=n-1;
    printf("The array after deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]); 
    printf("\nThe element at the beginning is deleted") ;
}

void deletionEnd()
{
    printf("The array before deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);  
    n=n-1;
    printf("The array after deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]); 
    printf("\nThe element at the end is deleted") ; 
}

void deletionAfter()
{
    printf("Enter the element to delete the element after it");
    printf("The array before deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);  
    for(i=1;i<n;i++)
        a[i]=a[i+1];
    n=n-1;
    printf("The array after deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]); 
    printf("\nThe element at the beginning is deleted") ;
}

void deletionBefore()
{
    printf("Enter the element to delete the element before it");
    printf("The array before deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);  
    for(i=1;i<n;i++)
        a[i]=a[i+1];
    n=n-1;
    printf("The array after deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]); 
    printf("\nThe element at the beginning is deleted") ;
}

void deletionPosition()
{
    int pos;
    printf("Enter the position of element which you want to delete(consider position of first element to be 1): ");
    scanf("%d",&pos);
    printf("The array before deletion: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]); 
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
    for(i=1;i<=n;i++)
        printf("%d ",a[i]); 
    printf("\nThe element at the beginning is deleted") ;   
}
void insertionBeginning()
{

}
void insertionEnd()
{

}
void insertionAfter()
{

}
void insertionBefore()
{

}
void insertionPosition()
{

}
void searchPosition()
{

}
void searchValue()
{

}
void sortAscending()
{

}
void sortDescending()
{

}
int main()
{
    int choice=1;
    // This is main menu
    printf("\n---------------ARRAY---------------\n");
    while(0<choice<7)
    {
        printf("\nEnter 1 for array creation\n");
        printf("Enter 2 for array traversion\n");
        printf("Enter 3 for deletion\n");
        printf("Enter 4 for insertion\n");
        printf("Enter 5 for searching\n");
        printf("Enter 6 for sorting\n");
        printf("Enter any other key to exit\n");
        scanf("%d",&choice);

        // Switching starts here
        switch(choice)
        {
            case 1:
            arrayCreation();
            break;

            case 2:
            arrayTraversion();
            break;

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
                break;
                
                case 2:
                deletionEnd();
                break;

                case 3: 
                deletionAfter();
                break;

                case 4:
                deletionBefore();
                break;

                case 5:
                deletionPosition();
                break;
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
                break;
                
                case 2:
                insertionEnd();
                break;

                case 3: 
                insertionAfter();
                break;

                case 4:
                insertionBefore();
                break;

                case 5:
                insertionPosition();
                break;
            }
            
            case 5:
            printf("Enter 1 for searching an element using its position\n");
            printf("Enter 2 for searching an element using its value\n");
            scanf("%d",&choice);
            //nested switch
            switch(choice)
            {
                case 1:
                searchPosition();
                break;

                case 2:
                searchValue();
                break;
            }

            case 6:
            printf("Enter 1 for sorting in ascending order\n");
            printf("Enter 2 for sorting in descending order\n");
            scanf("%d",&choice);
            //nested switch
            switch(choice)
            {
                case 1:
                sortAscending();
                break;

                case 2:
                sortDescending();
                break;
            }
            
            default:
                printf("\n----------Program Terminated----------\n");
        }
    }
    
}


