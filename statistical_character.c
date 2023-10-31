#include<stdio.h>
int main()
{
    char ch;
    int blank=0,other=0,digit=0;
    scanf("%c",&ch);
    while(ch!='\n')
    {
        if(ch>='0'&&ch<='9')
        {
            digit++;
        }
        else if(ch==' '||ch=='\n')
        {
            blank++;
        }
        else
        {
            other++;
        }
        ch=getchar();
    }
    printf("blank=%d,digit=%d,other=%d\n",blank,digit,other);
}