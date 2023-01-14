#include<stdio.h>
#include<stdlib.h>

int main()
{
    // A pointer
    int *ptr;
    int n, i;

    // Number of elements for array
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    //Dynamically Memory Allocation in Array using malloc 
    ptr= (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        printf("\n Enter element %d: ", i+1);
        scanf("%d",&ptr[i]);
    }

    // Printing final result
    for(i=0;i<n;i++){
        printf("\n Element %d : %d", i+1, ptr[i]);
    }
    return 0;
}