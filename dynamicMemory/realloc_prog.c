#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n,i,n1;

    // Enter number of element
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Dynamically memory allocation using malloc
    ptr=(int*)malloc(n*sizeof(int));

    //Initialize elements of array
    for(i=0; i<n; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%d",&ptr[i]);
    }

    // Accessing elements of array
    for(i=0; i<n; i++){
        printf("\n Element %d: %d",i+1,ptr[i]);
    }

    // new required size of array
    printf("\nEnter new size for the array: ");
    scanf("%d", &n1);

    // Reallocation of memory using realloc
    ptr= realloc(ptr, n1*sizeof(int));

    // Enter remaining elements
    for(i=n; i<n1; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    // Access all elements of array 
    for(i=0; i<n1; i++){
        printf("\nElement %d: %d", i+1, ptr[i]);
    }
    return 0;
}