#include<stdio.h>
main()
{
    int t,n,s[1000],c,k,d,i,j;
    float x;
    char a='%';
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        c=0,k=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
            c=c+s[i];
            }
            d=c/n;
            for(i=0;i<n;i++)
            {
                if(s[i]>d)k++;
            }

            x=(k*1.00/n)*100;
            printf("%.03f%c\n",x,a);
    }
    return 0;
}
