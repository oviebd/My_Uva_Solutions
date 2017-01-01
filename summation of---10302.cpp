#include<stdio.h>
#include<math.h>
main()
{
   double a,b,n,i;
    while(scanf("%lf",&n)==1)
    {
        b=0;
        for(i=1;i<=n;i++)
        {
            a=pow(i,3);
            b=b+a;
        }
        printf("%.0lf\n",b);
    }
    return 0;
}
