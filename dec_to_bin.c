#include<stdio.h>
int main()
{
    int s=50,p=0,dec,f,m,i;
    int bin[s];
    printf("Enter a decimal number to convert it into binary\n");
    scanf("%d",&dec);
    f=dec;
    while(f>0)
    {
        f=f/2;
        p=p+1;
    }
    for(i=p;i>=0;i--)
    {
        m=dec%2;
        dec=dec/2;
        bin[i]= m;
    }
    printf("The given number in binary format is: ");
    for(i=1;i<=p;i++)
    {
    printf("%d",bin[i]);
    }
}
    