#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=15)
    {
        printf("Lower ");
    }
    else
    printf("Upper ");
    if(n>=1 && n<=10)
    {
        printf("Double");
    }
    else if(n>=11 && n<=15)
    printf("Single");
    else if(n>15 && n<=25)
    {
        printf("Double");
    }
    else
    printf("Single");
}