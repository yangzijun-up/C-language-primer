#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    if (a+b>c&&a+c>b&&b+c>a)
    {
        printf("s=%lf",s);
    }
    else
    {
        printf("无法构成三角形");
    }
    return 0;
}