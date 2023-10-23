#include<stdio.h>
int main()
{
    int i,n; double sum;
    scanf("%d",&n);
    i=1; sum=0;
    while(i<=(2*n-1))
    {
        sum+=1.0/i;
        i+=2;
    }
    printf("sum=%.6lf\n",sum);
}