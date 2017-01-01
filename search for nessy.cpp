#include<stdio.h>
main()
{
    int t,n,m,k,l,o,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        k=n/3;
        l=m/3;
        o=k*l;
        printf("%d\n",o);
    }
    return 0;
}
