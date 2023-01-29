//program to create an array and delete an element from any particular position

#include<stdio.h>
int main()
{
    //initializing variables
    int i,n=0,p,a[n];
    printf("\n------------------ARRAY------------------\n\n");
    
    //talking number of elements as input
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);

    //taking input elements
    printf("\nEnter the elements:\n");
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    
    //traversing and printing array
    printf("\nThe array is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
    
    //taking the position in which the user want to delete element as input
    printf("\nEnter the position of element you want to delete: ");
    scanf("%d",&p);

    //deletion
    for(i=p;i<=n;i++)
        a[i]=a[i+1];
    n=n-1;

    //printing the array after deletion
    printf("\nThe array after deletion is:\n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
}