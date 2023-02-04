//program to find and print factors of a number

#include<stdio.h>
int main()
{
    int num,i,a[50];
    printf("Enter a number to print its factors");
    scanf("%d",&num);
    printf("The factors of %d are:\n",num);

    //dividing the input number by all the numbers from 1 to itself to find its factors
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%d ",i);
    }
}