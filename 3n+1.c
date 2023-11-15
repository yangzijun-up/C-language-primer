#include<stdio.h>
int main()
{
    int t,n,s,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        s=0;
        while(n!=1)
        {
            if(n%2==0){n=n/2;}
            else {n=3*n+1;}
            s++;
        }
        printf("%d ",s);
    }  
    printf("\n");
}