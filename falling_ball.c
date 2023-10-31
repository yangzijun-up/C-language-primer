#include<stdio.h>
int main()
{
    float h,n,total;
    scanf("%f%f",&h,&n);
    if(0==n)
    {
        h=0;
        total=h;
    }
    else
    {
        for(total=h;n;n--)
        {
            h/=2;
            total+=2*h;
        }
        total-=2*h;
    }
    printf("%.1f %.1f\n",total,h);
}
    
