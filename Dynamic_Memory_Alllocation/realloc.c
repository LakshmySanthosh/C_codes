#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,n1;

    //taking number of integers as input
    printf("Enter the number of integers: ");
    scanf("%d",&n);

    //using malloc function for memory allocation
    int *ptr = (int*)malloc(n*sizeof(int));
    if(ptr!=NULL)
    {
        //taking number of integers as input
        printf("Enter %d integers\n",n);
        for(i=0;i<n;i++)
        {
            printf("Integer %d: ",i+1);
            scanf("%d",ptr+i);
        }
        
        //printing the memory created using malloc function
        printf("Memory created using malloc function:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
        
        //taking the size of new memory as input
        printf("\nEnter the new size ");
        scanf("%d",&n1);

        //memory allocation using realloc
        ptr=(int*)realloc(ptr,n1*sizeof(int));
        for(i=n;i<(n1);i++)
        {
            printf("Integer %d: ",i+1);
            scanf("%d",ptr+i);
        }

        //printing the memory allocated using realloc
        printf("Memory created using realloc function:\n");
        for(i=0;i<n1;i++)
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