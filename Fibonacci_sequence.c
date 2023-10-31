#include<stdio.h>
int main()
{
    long int a1,a2;
    int i;
    a1=1;
    a2=1;
    for(i=1;i<=10;i++)
    {printf("%10ld%10ld",a1,a2);
    if(i%2==0){printf("\n");}
    a1=a1+a2;
    a2=a2+a1;}
    printf("\n");
}
