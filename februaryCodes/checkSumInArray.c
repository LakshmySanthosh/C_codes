//Given an array and a number, find a pair of two numbers from the array whose sum is that given number

#include<stdio.h>
int main()
{
    int i,j,n,sum,a[50];

    printf("\nEnter the number of elements of array: ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("\nEnter the sum: ");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("The numbers which give sum %d are %d and %d",sum,a[i],a[j]);
            }
        }
    break;
    }
}