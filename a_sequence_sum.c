#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,i,m,s;
    scanf("%d %d",&a,&n);
    m=0;
    s=0;
    for(i=1;i<=n;i++)
    {
        m=a+m*10;   
        s+=m;
    }
    printf("s=%d\n",s);
}