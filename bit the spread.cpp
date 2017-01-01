#include<stdio.h>
main()
{
    int i,s,t,d,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&s,&d);
        if(d>s||(s-d)%2!=0)printf("impossible\n");
        else
        {
            a=(s+d)/2;
            b=s-a;
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}
