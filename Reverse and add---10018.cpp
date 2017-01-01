#include<stdio.h>
main()
{
    long long int a,b,c,d,f,i,t,n,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        k=0;
        scanf("%lld",&a);
        f=1;
        while(f==1)
        {
            //k++;
            b=0;
            n=a;
            do
            {
                b=b*10+a%10;
                a=a/10;
            }
            while(a!=0);
            if(b==n)
            {
                printf("%lld %lld\n",k,b);
                f=0;
            }
            else
            {
                c=n+b;
                a=c;
                f=1;
                k++;
                //printf("%lld\n",c);
            }
        }

    }
    return 0;
}
