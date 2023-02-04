//program to find exponential without using inbuild pow()

#include<stdio.h>
int main()
{
    int x,y,i,a=1;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);  
    for(i=0;i<y;i++)
        a=a*x;
    printf("%d raised to %d (%d^%d) is %d",x,y,x,y,a);
}