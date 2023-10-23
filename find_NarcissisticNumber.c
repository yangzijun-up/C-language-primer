#include<stdio.h>
#include<math.h>
int main()
{
	int x,m,n,i,j,k;
	scanf("%d %d", &m, &n);
	for(x=m;x<n;x++)
    {
        i=x/100;
        j=x/10%10;
        k=x%10;
        if(x==pow(i,3)+pow(j,3)+pow(k,3))
        {printf("%d ",x);}
    }
    printf("\n");
}