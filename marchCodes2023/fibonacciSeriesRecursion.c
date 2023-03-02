#include<stdio.h>

//recursion function for fibonacci series
int fib(int n)
{
    int a=0,b=1,c;
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{ 
    int n,i;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d ",fib(i));
}