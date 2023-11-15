#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%d",&n);
    if(n>=10&&n<=99)
    {
        a=n/10;
        b=n%10;
        if(a==b){printf("yes\n");}
        else {printf("no\n");}
    }
    else if(n>=100&&n<=999)
    {
        c=n/100;
        d=n%100%10;
        if(c==d){printf("yes\n");}
        else {printf("no\n");}
    }
    else if(n>=1000&&n<=9999)
    {
        e=n/1000;
        f=n%1000/100;
        g=n%1000%100/10;
        h=n%1000%100%10;
        if(e==h&&f==g){printf("yes\n");}
        else {printf("no\n");}
    }
    else if(n>=10000&&n<=99999)
    {
        i=n/10000;
        j=n%10000/1000;
        k=n%10000%1000%100/10;
        l=n%10000%1000%100%10;
        if(i==l&&j==k){printf("yes\n");}
        else {printf("no\n");}
    }
}