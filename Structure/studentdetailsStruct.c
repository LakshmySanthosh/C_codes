#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
}S3={8,"Rohit",90.2};
struct student S1={4,"Anju",98.7};
int main()
{
    struct student S2;
    printf("Enter the info for student 2\n");
    scanf("%d\n",&S2.rollno);
    scanf("%s\n",S2.name);
    scanf("%f",&S2.marks);
    printf("The student info are:\n");
    printf("Student Rollno Name    Marks\n");
    printf("S1      %d     %s      %f\n",S1.rollno,S1.name,S1.marks);
    printf("S2      %d     %s      %f\n",S2.rollno,S2.name,S2.marks);
    printf("S3      %d     %s      %f\n",S3.rollno,S3.name,S3.marks);
}