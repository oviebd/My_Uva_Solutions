#include<stdio.h>
main()
{
    int p,k,n,c,t,i,j;
    scanf("%d",&t);
    for (j=1;j<=t;j++)
    {
        c=0;
        scanf("%d%d%d",&n,&k,&p);
        for(i=(k+1);i<300;i++)
        {
            c++;
        if(i==n+1)i=1;
        if(c==p)break;
        }
        printf("Case %d: %d\n",j,i);
    }
    return 0;
}
