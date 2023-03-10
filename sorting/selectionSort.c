#include<stdio.h>

int i,j,n;
int a[100];

void selectionSort()
{
    int min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        //swapping
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("\nThe array after sorting using selection sort is: ");
}

int main()
{ 
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    selectionSort();

    //printing sorted array
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}