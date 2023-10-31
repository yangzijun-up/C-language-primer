#include <stdio.h>
int main()
{
    int i,j;
    int a,b;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(i!=j)
            {
                a=i*1000+i*100+j*10+j;
                for(b=31;b*b<=a;b++)
                {
                    if(b*b==a)
                        printf("肇事车辆号牌是%d\n", a);
                }
            }

        }
    }
}
