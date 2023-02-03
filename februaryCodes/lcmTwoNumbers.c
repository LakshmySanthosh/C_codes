//program to find the lcm of two numbers

#include<stdio.h>
int main()
{
    int a,b,i,large,small,lcm=1,gcd;
    printf("Enter two numbers to find their LCM:\n");
    scanf("%d \n%d",&a,&b);

    //assigning values as large and small
    if(a>b)
    {
        large=a;
        small=b;
    }
    else
    {
        large=b;
        small=a;
    }
    for(i=small;i>=1;i--)
    {
        //finding the greatest common divisor
        if((large%i==0)&&(small%i==0))
        {
            gcd=i;
            break;
        }
    }
    
    //finding lcm by multiplying the numbers and dividing it by the greatest common divisor
    lcm=(large*small)/gcd;
    printf("The LCM of %d and %d is %d",a,b,lcm);
}
