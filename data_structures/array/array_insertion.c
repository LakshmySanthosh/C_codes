//program to create an array and insert an element in any particular position

#include<stdio.h>
int main()
{
    //initializing variables
    int i,n=0,p,k,a[n];
    printf("\n------------------ARRAY------------------\n\n");

     //talking number of elements as input
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);

    int a[n];
    //taking input elements
    printf("\nEnter the elements:\n");
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    
    //traversing and printing array
    printf("\nThe array is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
    
    //taking the position in which the user want to insert element as input
    printf("\n\nEnter the position in which you want to insert: ");
    scanf("%d",&p);

    //taking the element the user want to insert as input 
    printf("\nEnter the element you want to insert: ");
    scanf("%d",&k);

    //insertion
    for (i=n;i>=p;i--)
        a[i+1]=a[i];
    a[p]=k;
    n=n+1;

    //printing the array after insertion
    printf("\nThe array after insertion is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
}