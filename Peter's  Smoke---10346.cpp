#include<stdio.h>
main()
{
    int a,b,c,d,o,k,n,p,x,f;
    while (scanf("%d%d",&n,&k)==2)
    {
        d=0,o=0;
        p=n;
        f=1;
        while(f==1)
        {
            a=n/k;
            b=n%k;
            c=a+b;
            o=c+o;
            d=d+b;
            if(c>=k)
            {
                n=c;
                f=1;
            }
            else f=0;
        }
        x=p+o-d;
        printf("%d\n",x);
    }
    return 0;
}
