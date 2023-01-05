#include<stdio.h>
int main()
{
    struct student_info{
        int Roll;
        char name[20];
        float mark;
    };
    struct student_info stud1;
    printf("Enter your roll number: ");
    scanf("%d",&stud1.Roll);
    printf("Enter your name: ");
    scanf("%s",&stud1.name);
    printf("Enter your marks: ");
    scanf("%f",&stud1.mark);  
    printf("Your name is: %s\n",stud1.name);
    printf("Your roll number is: %d\n",stud1.Roll); 
    printf("Your mark is: %f\n",stud1.mark);   
}