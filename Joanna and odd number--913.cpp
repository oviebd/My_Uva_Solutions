#include<stdio.h>
main()
{
   long long int i,n,o,a,b,c,d;
    while(scanf("%lld",&n)==1)
    {
        o=0;
        for(i=1;i<=n;i=i+2)
        {
            o=o+i;
        }
       // printf("%lld\n",o);
        a=2*o-1;
        b=2*o-3;
        c=2*o-5;
        d=a+b+c;
       // printf("A=%d , B= %d , C= %d\n",a,b,c);
        printf("%lld\n",d);
    }
    return 0;
}
