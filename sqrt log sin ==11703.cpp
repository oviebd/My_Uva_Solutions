#include<stdio.h>
#include<math.h>
main()
{
    double y,x;
    int t,i;
    scanf("%d",&t);
    printf("\n");
    for(i=1;i<=t;i++)
    {
       // printf("\n");
        scanf("%lf",&y);
        x=sqrt(y);
        printf("%.0lf",x);
        printf("\n");
    }
    return 0;
}
