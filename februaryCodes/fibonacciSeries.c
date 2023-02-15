//program using functions to generate the Fibonacci series
#include<stdio.h>

void fib(int n)
{
    int a=0,b=1,c,i=0;
    while(a<=n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
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