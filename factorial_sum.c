#include<stdio.h>
int main()
{int n,c=1,i1=1,i2=1,sum=0,a,b,d;
 scanf("%d",&n);
 while(i2<=n)
 {
   while(i1<=i2)
   {
    c=c*i1;
    i1++;
   }
   sum=sum+c;
   i2++;
 }
 printf("%d\n",sum);
 a=sum/10;
 b=sum/10%10;
 d=sum%10;
 if(n==a||n==b||n==d)printf("1\n");
 else printf("0\n");
}
