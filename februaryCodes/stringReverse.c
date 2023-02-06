//program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char str[50],a[50];

    //taking string input and finding the string length using strlen()
    printf("\nEnter the string you want to reverse:\n");
    scanf("%s",&str);
    n=strlen(str);

    //reversing the string
    for(i=0;i<(n/2);i++)
    {
        a[i]=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=a[i];
    }

    //printing the reversed string
    printf("\nThe reversed string is:\n");
    printf("%s",str);
}
