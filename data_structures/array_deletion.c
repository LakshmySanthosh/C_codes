#include<stdio.h>
int main()
{
    int i,n=0,p,a[n];
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The array is:\n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the position of element you want to delete: ");
    scanf("%d",&p);
    for(i=p;i<=n;i++)
        a[i]=a[i+1];
    n=n-1;
    printf("The array after deletion is:\n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
}