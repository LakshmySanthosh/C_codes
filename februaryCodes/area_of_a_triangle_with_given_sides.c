//Program to find the area of a triangle
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,area;
    printf("Enter the length of first side of the triangle: ");
    scanf("%d",&a);
    printf("Enter the length of second side of the triangle: ");
    scanf("%d",&b);
    printf("Enter the length of third side of the triangle: ");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle with the given sides is: %d",area);
}