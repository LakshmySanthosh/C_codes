#include<stdio.h>

int i,j,n;
int a[100];

void insertionSort()
{
    int temp;
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j])
        {
            //swapping
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
        
    }
    printf("\nThe array after sorting using insertion sort is: ");
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
        
    insertionSort();

    //printing sorted array
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}