#include<stdio.h>
main()
     {
     long long int n,a,c,i;
    while (scanf("%lld",&n)==1)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            a=i*i*i;
            c=c+a;
        }
        printf("%lld\n",c);
    }
    return 0;

     }
