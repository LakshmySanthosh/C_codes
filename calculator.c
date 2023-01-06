#include<stdio.h>
int main()
{
    int var,a,b,c,ans;
    do
    {

        printf("----------This is a calculator----------\n");
        printf(" * For addition,       press 1\n");
        printf(" * For subtraction,    press 2\n");
        printf(" * For multiplication, press 3\n");
        printf(" * For division,       press 4\n");
        printf(" * Press any other key to exit\n");
        scanf("%d",&var);
    
        switch(var)
        {
            case 1:
                printf("Enter the two numbers to add\n");
                scanf("%d\n%d",&a,&b);
                c=a+b;
                printf(" %d + %d = %d \n",a,b,c);
                break;

            case 2:
                printf("Enter the two numbers to subtract(in order)\n");
                scanf("%d\n%d",&a,&b);
                c=a-b;
                printf(" %d - %d = %d \n",a,b,c);
                break;

            case 3:
                printf("Enter the two numbers to multiply\n");
                scanf("%d\n%d",&a,&b);
                c=a*b;
                printf(" %d * %d = %d \n",a,b,c);
                break;

            case 4:
                printf("Enter the two numbers to divide\n");
                scanf("%d\n%d",&a,&b);
                c=a/b;
                printf(" %d / %d = %d \n",a,b,c);
                break;
            default:
            break;

        }
        printf("Do you wish to calculate more? (Press 10 if yes): ");
        scanf("%d",&ans);
    }while(ans==10);
    printf("Calculator turning off!\n");
}