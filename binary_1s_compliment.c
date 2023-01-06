#include<stdio.h>
int main()
{
    int s=8,i;
    char bin[s],comp[s],a;
    printf("Enter a %d bit binary number to find it's 1's compliment: ",s);
    scanf("%s",&bin);
    for(i=0;i<s;i++)
    {
        if(bin[i]=='0')
        {
            comp[i]='1';
        }
        else
        {
            comp[i]='0';
        }
    }
    comp[s] = '\0';
    printf("binary number  : %s\n",bin);
    printf("1's compliment : %s",comp);
}