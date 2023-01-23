#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
struct student S={4,"Anju",98.7};
int main()
{
    struct student *ptr=&S;
    printf("The student info are:\n");
    printf("Student Rollno Name    Marks\n");
    printf("S1      %d     %s      %f\n",ptr->rollno,(*ptr).name,ptr->marks);
}