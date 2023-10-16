#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n<=18)
    {
        case 1 :printf("你属于儿童\n");break;
        case 0 :switch(n<=44)
        {
            case 1:printf("你属于青年\n");break;
            case 0:switch(n<=59)
            {
                case 1:printf("你属于中年\n");break;
                case 0:switch(n<=69)
                {
                    case 1:printf("你属于老年\n");break;
                    case 0:switch(n<=79)
                    {
                        case 1:printf("你进入古稀之年\n");break;
                        case 0:printf("你属于耄耋老人\n");break;
                    }
                }
            }
        }
    }
}