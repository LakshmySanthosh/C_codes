//program to find whether the number input by the user is prime or composite

#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("Enter a number to check if it is prime or composite: ");
    scanf("%d",&num);

    //checking if the number is divisible by any numbers other than 1 and itself
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            flag=1;
    }
    if(flag==0)
        printf("%d is a prime number",num);
    else
        printf("%d is a composite number",num);
}
