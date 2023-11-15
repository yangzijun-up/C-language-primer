#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j;
    int count=0,sum=0;
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0&&i!=j)
            {break;}
            else if(i==j)
            {
                count++;
                sum+=i;
            }
        }
    }
    printf("%d %d\n",count,sum);
}