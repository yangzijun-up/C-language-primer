#include<stdio.h>
int main()
{
    int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>=b&&a>=c&&a>=d&&b<=c&&b<=d)
        {printf("%d\n%d\n",b,a);}
        else if(a>=b&&a>=c&&a>=d&&c<=b&&c<=d)
        {printf("%d\n%d\n",c,a);}
        else if(a>=b&&a>=c&&a>=d&&d<=b&&d<=c)
        {printf("%d\n%d\n",d,a);}
        else if(b>=a&&b>=c&&b>=d&&a<=c&&a<=d)
        {printf("%d\n%d\n",a,b);}
        else if(b>=a&&b>=c&&b>=d&&c<=a&&c<=d)
        {printf("%d\n%d\n",c,b);}
        else if(b>=a&&b>=c&&b>=d&&d<=a&&d<=c)
        {printf("%d\n%d\n",d,b);}
        else if(c>=a&&c>=b&&c>=d&&a<=b&&a<=d)
        {printf("%d\n%d\n",a,c);}
        else if(c>=a&&c>=b&&c>=d&&b<=a&&b<=d)
        {printf("%d\n%d\n",b,c);}
        else if(c>=a&&c>=b&&c>=d&&d<=a&&d<=b)
        {printf("%d\n%d\n",d,c);}
        else if(d>=a&&d>=b&&d>=c&&a<=b&&a<=c)
        {printf("%d\n%d\n",a,d);}
        else if(d>=a&&d>=b&&d>=c&&b<=a&&b<=c)
        {printf("%d\n%d\n",b,d);}
        else if(d>=a&&d>=b&&d>=c&&c<=a&&c<=b)
        {printf("%d\n%d\n",c,d);}
}
