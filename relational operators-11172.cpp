#include<stdio.h>
main()
{
    int t,i;
   long int a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld%ld",&a,&b);
        //printf("%ld\t%ld\n",b,a);
        if(a>b)printf(">\n");
         if(a<b)printf("<\n");
        if(a==b)printf("=\n");

    }
    return 0;
}
