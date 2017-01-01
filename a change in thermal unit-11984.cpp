#include<stdio.h>
main()
{
    int t,i;
    float a,c,f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f",&c,&f);
        a=(((5*f)/9)+c);
        a=a*1.00;
        printf("Case %d: %.2f\n",i,a);
    }
    return 0;
}
