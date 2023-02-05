//program to print first n prime numbers (n is taken as input)

#include<stdio.h>
int main()
{
    int n,i,j,flag;
    printf("Enter the value of n to print first n prime numbers: ");
    scanf("%d",&n);
    printf("The first %d prime numbers are: \n",n);

    //printing 2 if n is greater than 0
    if(n>0)
        printf("%d ",2);

    //taking for loop for number from 3 and greater when n is greater than 1
    while(n>1)
    {
        for(i=3;;i++)
        {
            for(j=2;j<i;j++)
            {
                //initializing flag=0 and setting flag=1 if j divides i
                flag=0;
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            
            //printing n-1 prime numbers from 3
            if(flag==0)
            {
                printf("%d ",i);
                n=n-1;
            }
            if(n==1)
                break;
        }
    }
}