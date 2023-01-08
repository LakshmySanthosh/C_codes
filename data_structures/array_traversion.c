#include<stdio.h>
int main(){
    int a[50],n,i;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The array is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
}
