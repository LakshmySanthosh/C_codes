#include<stdio.h>
int main(){
    int num,rev=0,m,n;
    printf("Enter a number to check if it is a palindrome or not\n");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    if (num==rev)
        printf("%d is a palindrome",num);
    else
        printf("%d is not a palindrome",num);
}