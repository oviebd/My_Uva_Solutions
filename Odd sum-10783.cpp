#include<stdio.h>
main()
{
    int t,a,b,i,c,j,k;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        c=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if((i%2)!=0)c=c+i;
        }
        printf("Case %d: %d\n",j,c);
    }
}
