#include<stdio.h>
#include<algorithm>
//#include<iostream>
using namespace std ;
long int p[2000005],n,i;

 main()

{
    while (scanf("%ld",&n)!=EOF)

    {
        if(n==0)break;
        for(i=0;i<n;i++)

        {
            scanf("%ld",&p[i]);
        }

        sort(p,p+n);

        for(i=0;i<n;i++)

        {
            printf("%ld ",p[i]);

        }
         printf("\n");
    }

return 0;
}
