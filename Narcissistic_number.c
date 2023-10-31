#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n;
    n=100;
     while (n<=999)
    {
        a= n/100;
        b= n/10-a*10;
        c= n-100*a-10*b;
        if (n==pow(a,3)+pow(b,3)+pow(c,3))
            printf("flower=%d\n",n);
        n++;
    }
}
 
