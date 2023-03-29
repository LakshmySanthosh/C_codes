#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first variable a: ");
    scanf("%d",&a);
    printf("Enter the second variable b: ");
    scanf("%d",&b);
    printf("The numbers before swapping:\n a=%d\n b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe numbers after swapping:\n a=%d\n b=%d",a,b);
    return 0;
} 