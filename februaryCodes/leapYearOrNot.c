#include<stdio.h>
int main()
{
    int y;
    printf("Enter an year to check if it is a leap year or not: ");
    scanf("%d",&y);
    if((y%4==0)&&(y%100!=0)||(y%400==0))
        printf("%d is a leap year",y);
    else
        printf("%d is not a leap year",y);
}