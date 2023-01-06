#include<stdio.h>
int main()
{
    int a,fact=1,i=1;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&a);
    while(i<=a)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("The factorial of %d is %d",a,fact);
    return 0;
}