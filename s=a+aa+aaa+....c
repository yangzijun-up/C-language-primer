#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,i,sum=0,t=0;
    scanf("%d,%d",&a,&n);
    printf("Input a=?,n=?\n");
    for(i=1;i<=n;i++)
    {t=t*10+a;
    sum+=t;}
    printf("a+aa+aaa+…=%d",sum);
}
