#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b,t,i,c,d;
    for(i=1;i<=202;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<0||b<0)break;
        else
        {
            c=abs (b-a);
            d=abs(a+1+(99-b));
            if(a>b)
            {
            d=abs(b+1+(99-a));
            }
            if(c<=d)printf("%d\n",c);
            if(d<c)printf("%d\n",d);
        }
    }
    return 0;
}
