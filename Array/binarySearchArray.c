#include<stdio.h>
int main()
{
    int arr[50], num, val, lb, ub, mid, count=0;
    printf("Enter the number of element: ");
    scanf("%d", &num);

    printf("Enter the elements in the array\n");
    for(int i=1; i<=num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &val);
    lb=1;
    ub= num;

    while(lb<=ub)
    {
        mid=(ub+lb)/2;
        if(arr[mid]==val)
        {
            printf("Element %d is found on %d", val, mid);
            count++;
            break;
        }
        else if(val>arr[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    if(count==0)
    {
        printf("Item not found");
    }
return 0;
}