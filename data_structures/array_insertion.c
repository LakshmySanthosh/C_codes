#include<stdio.h>
int main()
{
    int i,n=0,p,k,a[n];
    printf("Enter the  number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the  elements: \n");
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The array is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the position in which you want to insert: ");
    scanf("%d",&p);
    printf("Enter the element you want to insert: ");
    scanf("%d",&k);
    for (i=n;i>=p;i--)
        a[i+1]=a[i];
    a[p]=k;
    n=n+1;
    printf("The array after insertion is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
}