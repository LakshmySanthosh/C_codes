//program to find the largest and smallest element in an array

#include<stdio.h>
int main()
{
    int n,i,l,s;
    
    //taking array input and printing it
    printf("\nEnter the number of elements of array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    l=s=a[0];

    //finding the largest element of array
    for(i=1;i<n;i++)
    {
        if(l<a[i])
            l=a[i];
    }

    //finding the smallest element of array
    for(i=1;i<n;i++)
    {
        if(s>a[i])
            s=a[i];
    }

    //printing output
    printf("\n\nLargest:  %d\nSmallest: %d",l,s);
}