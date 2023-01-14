#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    // Enter the number of element in array 
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    //Dynamic Memory allocation using calloc
    ptr= (int*)calloc(n, sizeof(int));

    //Initialization of elements inside array
    printf("Enter the elements in array \n");
    for(i=0; i<n; i++)
    {
        printf("\n Enter element %d:",i);
        scanf("%d", &ptr[i]);
    }

    // Accessing array elements
    for(i=0; i<n; i++)
    {
        printf("\nElement %d: %d", i, ptr[i]);
    }
    return 0;
}