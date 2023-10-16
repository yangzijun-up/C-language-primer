#include<stdio.h>
int main()
{
    char c1,c2,c3,c4,c5,x1,x2,x3,x4,x5;
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    x1=c1+3;
    x2=c2+3;
    x3=c3+3;
    x4=c4+3;
    x5=c5+3;
    printf("%c%c%c%c%c is encrypted to %c%c%c%c%c\n",c1,c2,c3,c4,c5,x1,x2,x3,x4,x5);
}