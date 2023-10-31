#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d*",i);
            n/=i;
            i=1;
        }
    }
    printf("%d\n",n);
}