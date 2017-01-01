#include<stdio.h>
main()
{
    long int a,b,c,d,e,i,k,f;
    while(scanf("%lu%lu",&a,&b)==2)
    {
        k=0,f=0;
        if(a==0&&b==0)break;
        do
        {
            c=a%10;
            a=a/10;
            d=b%10;
            b=b/10;
            e=c+d+f;
            f=e/10;
            if(e>=10)k++;
        }
        while(a!=0||b!=0);
        if(k==0)printf("No carry operation.\n");
        if(k==1)printf("1 carry operation.\n");
        if(k>1) printf("%lu carry operations.\n",k);
    }
    return 0;
}
