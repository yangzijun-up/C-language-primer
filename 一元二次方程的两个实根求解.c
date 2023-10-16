#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double x1,x2,t;
    scanf("%d %d %d",&a,&b,&c);
    t=b*b-4*a*c;
    x1=(-b+sqrt(t))/(2*a);
    x2=(-b-sqrt(t))/(2*a);
    printf("x1=%.2lf x2=%.2lf\n",x1,x2);
}
