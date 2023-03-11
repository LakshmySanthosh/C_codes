#include<stdio.h>

//function to find factorial using recursion
int fact(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return x*fact(x-1);
}

//main function
int main()
{
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}
