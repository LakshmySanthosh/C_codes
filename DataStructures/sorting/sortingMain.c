#include<stdio.h>

int i,j,n;
int a[100];

//function for swapping elements
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

//function for array creation
void arrayCreation()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

//function for selection sort
void selectionSort()
{
    int min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        swap(&a[min],&a[i]);
    }
    printf("\nThe array after sorting using selection sort is: ");
}

//function for insertion sort
void insertionSort()
{
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j])
        {
            swap(&a[j],&a[j-1]);
            j--;
        }
    }
    printf("\nThe array after sorting using insertion sort is: ");
}

//function for bubble sort
void bubbleSort()
{
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
        
    }
    printf("\nThe array after sorting using bubble sort is: ");
}

int main()
{ 
    arrayCreation();
    int choice=1;
    printf("\n\nWhich sorting technique you want to use?\n");
    printf("\n1. Selection Sort");
    printf("\n2. Insertion Sort");
    printf("\n3. Bubble Sort");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        selectionSort();
        break;
            
        case 2:
        insertionSort();
        break;

        case 3:
        bubbleSort();
        break;

        default:
        printf("Invalid choice. Exiting the program!!!");
        break;
    }
    if(choice<=3)
    {
        for(i=0;i<n;i++)
            printf("%d ",a[i]); 
    }
}