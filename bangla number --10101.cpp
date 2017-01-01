#include<stdio.h>

main()

{
    long long int n,a,b,c,d,e,f,g,h,i,j,k,l=0,s,t,u,v,w,x,y,z;
    while (scanf("%lld",&n)==1)

    {
        l++;
        printf("%4lld.",l);
        a=n/10000000;
        if(a>0)

        {
         //   printf("%lld kuti ",a);

         if(a>=100)

         {
           s=a/10000000;
           if(s>0)printf(" %lld kuti",s);

           t=a%10000000;
           u=t/100000;
           if(u>0)printf(" %lld lakh" ,u);

           v=t%100000;
           w=v/1000;
           if(w>0) printf(" %lld hajar",w);

           x=v%1000;
           y=x/100;
           if(y>0)printf(" %lld shata",y);

           z=x%100;
           if(z>0)printf(" %lld",z);
           printf(" kuti");

         }

         else printf(" %lld kuti",a);

        }


        b=n%10000000;
        c=b/100000;
        if(c>0)printf(" %lld lakh",c );

        d=b%100000;
        e=d/1000;
        if(e>0)printf(" %lld hajar",e);

        f=d%1000;
        g=f/100;
        if(g>0)printf(" %lld shata",g);

        h=f%100;
       // i=f/100;
        if(h>0) printf(" %lld",h);
        if(n==0)printf(" %lld",n);

        printf("\n");

    }
    return 0;
}
