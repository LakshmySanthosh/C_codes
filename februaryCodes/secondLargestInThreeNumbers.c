//program to find the second largest among 3 numbers
#include<stdio.h>
int main()
{
    int a,b,c;

    //taking 3 numbers as input
    printf("\nEnter 3 numbers: \n");
    printf("Number 1: ");
    scanf("%d",&a);
    printf("Number 2: ");
    scanf("%d",&b);
    printf("Number 3: ");
    scanf("%d",&c);

    //finding the second largest and printing
    if((a>b)&&(a>c))
    {
        if(b>c)
            printf("%d is the second largest",b);
        if(c>b)
            printf("%d is the second largest",c);
    }    
    if((b>a)&&(b>c))
    {
        if(a>c)
            printf("%d is the second largest",a);
        if(c>a)
            printf("%d is the second largest",c);
    } 
    if((c>a)&&(c>b))
    {
        if(a>b)
            printf("%d is the second largest",a);
        if(b>a)
            printf("%d is the second largest",b);
    } 
}