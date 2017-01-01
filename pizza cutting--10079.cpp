#include<stdio.h>

main()
{

   long long int n,i,p;
    while(scanf("%llu",&n)==1)
    {
        p=1;
     if(n<0)break;
     for(i=1;i<=n;i++)
     {
         p=p+i;
     }
     printf("%llu\n",p);
    }
    return 0;
}
