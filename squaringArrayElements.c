//program to take input array elements and square all the elements and print them in the same array
#include<stdio.h>
int main()
{
    int n,i;

    //taking array input and printing it
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    //squaring the elements in for loop
    for(i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }
    
    //printing the squared array
    printf("The squared array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}