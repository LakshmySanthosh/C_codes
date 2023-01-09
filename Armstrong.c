#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,n,i,s,h;
    printf("Program find the Amstrong numbers between two numbers\n");
    printf("Enter the first number: ");
    scanf("%d",&i);
    printf("Enter the second number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        y=i;
        s=i;
        x=0;
        h=0;
        while(s>0)
        {
            s=s/10;
            h=h+1;
        }
        while(y>0)
        {
            a=y%10;
            x=x+pow(a,h);
            y=y/10;
        }
        if(x==i)
            printf("%d\n",i);
        i=i+1;
    }
    return 0;
}