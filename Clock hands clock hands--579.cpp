#include<stdio.h>
#include<iostream>

using namespace std;

main()

{
    float h,m,angle,final;
    while (scanf("%f:%f",&h,&m))
    {
        if(h==0&&m==0)break;
        angle=(.5)*(60*h-11*m);
        if(angle<0)angle=-angle;
        final=360-angle;
        if(angle<final)printf("%.3f\n",angle);
        else printf("%.3f\n",final);

    }

    return 0;
}
