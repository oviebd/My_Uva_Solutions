#include<stdio.h>
main()
{
     double n,m,a,b,c,d,i,j,k,o;
    double x;
    while(scanf("%lf%lf",&n,&m)==2)
    {
        a=1,b=1,d=1;
        if(n==0&&m==0)break;
        for(i=1;i<=n;i++)
        {
            a=a*i;
        }
        for(j=1;j<=m;j++)
        {
            b=b*j;
        }
        c=n-m;
        for(k=1;k<=c;k++)
        {
            d=d*k;
        }
      o=  a/(b*d);
      printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,o);
        //printf("%lf\n",x);
    }
    return 0;
}
