//program using functions to generate the Fibonacci series
#include<stdio.h>

void fib(int n)
{
    int i=0;
    int a=0,b=1,c;
    while(i<n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}

int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The fibonacci series is:");
    fib(n);
}