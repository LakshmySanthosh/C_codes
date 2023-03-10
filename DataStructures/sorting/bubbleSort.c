#include<stdio.h>

int i,j,n;
int a[100];

void bubbleSort()
{
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                //swapping
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    printf("\nThe array after sorting using bubble sort is: ");
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
    bubbleSort();

    //printing sorted array
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}