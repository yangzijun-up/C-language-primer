#include<stdio.h>
int main()
{
    int x,y,z;
    printf("input z=?\n");
    scanf("%d",&z);
    for(x=1;x<=z;x++)
    {
        for(y=1;y<=z-x;y++)
        {
            printf(" ");
        }
        for(y=1;y<=2*x-1;y++)
        {
            if(y==1||y==2*x-1||x==z)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}