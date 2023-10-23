#include<stdio.h>
int main()
{
    int n,s,i;
    scanf("%d",&n);
    i=s=1;
    while(i<=n)
    {
        s=s*i;
        i++;
    }
    printf("%d\n",s);
}