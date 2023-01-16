#include<stdio.h>
int main()
{
    int n=0,a[n],i,e,flag=0;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the element you want to search: ");
    scanf("%d",&e);
    for(i=1;i<=n;i++)
    {
        printf("%d %d \n",a[i],e);
        if(a[i]==e)
            printf("%d is found at position %d\n",e,i);
            flag=1;
    }
    if(flag==0)
        printf("The element is not found");
    return 0;
}