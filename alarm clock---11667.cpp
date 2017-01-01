#include<stdio.h>
main()
{
    int h1,h2,m1,m2,h,m,n;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)break;
        if(h1==0)h1=24;
        if(h2==0)h2=24;
        if(h1>h2)h=(24-h1)+h2;
        if(h2>=h1)h=h2-h1;
        if(h2==h1&&m1>m2)
        {
            h=24;
            m=m1-m2;
        }
        m=m2-m1;
        //if(m<0)m=-m;
        n=h*60+m;
        printf("%d\n",n);
    }
    return 0;
}
