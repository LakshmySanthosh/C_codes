#include<stdio.h>

int main()
{
    int num, val, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        val= num%10;
        sum= sum + val;
        num=num/10;
    }
    printf("Sum is %d", sum);
    return 0;
}