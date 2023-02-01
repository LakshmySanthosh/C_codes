//program to convert a user input binary number to decimal number

#include<stdio.h>
#include<math.h>
int main()
{
    //initializing values
    int num,i,n,a,dec=0;
    
    //taking binary number as input
    printf("Enter a binary number to convert it into decimal: ");
    scanf("%d",&num);
    a=num;
    for(i=0;i<n;i++)
    {
        if(num%10==1)
            dec=dec+pow(2,i);
        num=num/10;
    }

    //printing output
    printf("The decimal number corresponding to %d is %d ",a,dec);
}