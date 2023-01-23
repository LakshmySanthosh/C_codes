#include<stdio.h>
#pragma pack(1)//Include this line for packing and remove this fopr padding 
struct abc
{
    char a;
    int b;
};
int main()
{
    struct abc s;
    printf("%d",sizeof(s));
}