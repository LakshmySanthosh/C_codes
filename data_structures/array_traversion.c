//program to create and traverse an array

#include<stdio.h>
int main(){
    //initializing variables
    int n=0,i,a[n];
    printf("\n------------------ARRAY------------------\n\n");

    //talking number of elements as input
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);

    //taking input elements
    printf("\nEnter the elements:\n");
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    
    //traversing and printing array
    printf("\nThe array after traversion is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
}
