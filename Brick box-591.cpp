#include<stdio.h>
main()
{
    int a,b,c,n,i,h[120],k,j=0;
    while(scanf("%d",&n)==1)
    {
        j++;
        c=0,b=0;
        if(n==0)break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
        }
        for(i=0;i<n;i++)
        {
            c=h[i]+c;
        }
        a=c/n;
        for(i=0;i<n;i++)
        {
            if(h[i]>a)
            {
                k=h[i]-a;
                b=k+b;
                 //printf("%d\t",b);
            }
        }
        //b=n-k;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,b);
    }
    return 0;
}
