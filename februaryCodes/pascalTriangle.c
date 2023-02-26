//program to generate and plot the Pascal triangle
#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int main()
{
    int i,j,n,nCr;
    printf("Enter the numer of rows: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            nCr=fact(i)/(fact(j)*fact(i-j));
            printf("%d ",nCr);
        }
        printf("\n");
    }
}
