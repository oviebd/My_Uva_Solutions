#include<stdio.h>
#include<math.h>
main()
{
    long int a,b,n1,n2,i,c,n;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0&&b==0)break;
        n1=sqrt(a);
        n2=sqrt(b);
        c=0;
        for(i=n1;i<=n2;i++)
        {
            n=pow(i,2);
            if(n>=a&&n<=b)c++;
        }
        printf("%ld\n",c);
    }
    return 0;
}
