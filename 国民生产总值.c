#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double r,p;
    scanf("%lf %d",&r,&n);
    p=pow((1+r),n);
    printf("%lf\n",p);
}