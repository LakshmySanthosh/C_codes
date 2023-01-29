//program to create an array and search an element in it using linear search

#include<stdio.h>
int main()
{
    //initialize variables
    int n,i,ele,flag=0;
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
    
    //Taking the element to be searched as input
    printf("\n\nEnter the element you want to search: ");
    scanf("%d",&ele);

    //searching and printing the result
    for(i=1;i<=n;i++)
    {
        if(a[i]==ele)
        {
            printf("\n%d is found at position %d\n",ele,i);
            flag=1;
        }
    }
    if(flag==0)
        printf("\nThe element is not found");
    return 0;
}
