#include<stdio.h>
#define pi 3.1415926
int main()
{
    int r;
    float c,s;
    scanf("%d",&r);
    c=2*pi*r;
    s=pi*r*r;
    printf("r=%d,c=%f,s=%f",r,c,s);
}