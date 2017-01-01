#include<stdio.h>
main()
{
    unsigned long int n,a,b,o,k,p;
    while (scanf("%lu",&n)==1&&n!=0)
    {
        do
        {
            b=0;
            while(n!=0)
            {
            a=n%10;
            o=n/10;
            b=b+a;
            n=o;
            }
            n=b;
            //printf("%lu\n",n);
        }
        while (n>=10);
        printf("%lu\n",n);
    }
    return 0;
}
