#include<stdio.h>
int main(){
    int n=0,i,a[n];
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The array is: \n");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
