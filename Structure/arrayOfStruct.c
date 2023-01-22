#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    int n,i;
    struct student s[50];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter Roll number, Name and Marks respectively\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
    }
    printf("Rollno  Name  Marks\n");
    for(i=0;i<n;i++)
    {
        printf("%d      %s    %f \n",s[i].rollno,s[i].name,s[i].marks);
    }

}