#include<stdio.h>
int main()
{
    int n,sum,i;
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("sum=%d\n",sum);
}