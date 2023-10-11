#include<stdio.h>
int main()
{
    int m=407,i1,i2,i3;
    i1=m%8;
    i2=m/8%8;
    i3=m/8/8%8;
    printf("407=0%d%d%d\n",i3,i2,i1);
}