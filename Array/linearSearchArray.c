// Linear Search Using array
#include<stdio.h>

int main()
{
    int arr[50], num, val, count=0;
    printf("Enter the number of element in array: ");
    scanf("%d", &num);

    printf("Enter the elements in array\n");
    for(int i=1; i<=num; i++){
        scanf("%d", &arr[i]);
    }

    // Element Search
    printf("Enter the element you want to search: ");
    scanf("%d",&val);
    
    for(int i=1;i<=num;i++){
        if(arr[i]==val){
            printf("%d is the index of %d", i, val);
            count++;
        }
    }
    if(count==0){
        printf("Element not found.");
    }
    return 0;
}