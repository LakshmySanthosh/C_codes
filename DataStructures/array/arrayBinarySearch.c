#include<stdio.h>
int main()
{
    int n,first,mid,last,i,ele;
    //initialize variables
    printf("\n------------------ARRAY------------------\n\n");

    //talking number of elements as input
    printf("ENTER A SORTED ARRAY\n\n");
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
    
    //Taking the element to be searched as input
    printf("\n\nEnter the element you want to search: ");
    scanf("%d",&ele);

    first=1;
    last=n;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]<ele)
            first=mid+1;
        else if(a[mid]==ele)
        {
            printf("%d is found at position %d",ele,mid);
            break;
        }
        else
            last=mid-1;
    }
    if(first>last)
        printf("The element is not found");
    return 0;
}