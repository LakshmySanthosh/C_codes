#include<stdio.h>
int main()
{
    int a[50],n,f,m,l,i,ele;
    printf("ENTER A SORTED ARRAY\n");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The array is: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the element you want to search: ");
    scanf("%d",&ele);
    f=1;
    l=n;
    m=(f+l)/2;
    while(f<=l)
    {
        if(a[m]<ele)
            f=m+1;
        else if(a[m]==ele)
        {
            printf("%d is found at position %d",ele,m);
            break;
        }
        else
            l=m-1;
        if(f>l)
            printf("The element is not found");
        m=(f+l)/2;
    }
    return 0;
}