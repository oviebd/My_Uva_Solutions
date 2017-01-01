#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

main()
{
    int test,x,y,r,i;
    float short_len,long_len,l;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>r;
        l=sqrt((x*x)+(y*y));
        short_len=r*1.00-l;
        long_len=r*1.00+l;
        printf("%.2f %.2f\n",short_len,long_len);


    }

    return 0;
}
