#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;

    //Taking number of elements as input
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    
    //using calloc function to allocate memory
    int *ptr =(int*)calloc(n,sizeof(int));
    if(ptr!=NULL)
    {
        //taking elements as input
        for(i=0;i<n;i++)
        {
            printf("Enter the integer: ");
            scanf("%d",ptr+i);
        }
        //displaying the memory created using calloc function
        printf("Memory created using calloc function:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
    }

     //case when memory is not available
    else
    {
        printf("Memory is not available");
    }
    free(ptr);
}