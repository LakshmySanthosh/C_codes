#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;

    //Taking number of elements as input
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    
    //Using malloc function to allocate memory
    int *ptr = (int*)malloc(n*sizeof(int));
    if(ptr!=NULL)
    {
        //Taking input
        for(i=0;i<n;i++)
        {
            printf("Enter the integer: ");
            scanf("%d",ptr+i);
        }

        //Printing the memory allocated using malloc function
        printf("Memory created using malloc function:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
    } 
     //case when memory is not available
    else
    {
        printf("Memory not available");
        exit(1);
    }
    free(ptr);
}
