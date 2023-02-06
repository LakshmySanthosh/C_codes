//program to find the mode of the numbers input

#include<stdio.h>
int main()
{
    int i,j,n,count=0,num,m=0,a[50];
    printf("\nHow many numbers you want to enter?\n");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count>m)
        {
            num=a[i];
            m=count;
            count=0;
        }
    }

    printf("\nThe mode of the given data is %d",num);
    return 0;
}

