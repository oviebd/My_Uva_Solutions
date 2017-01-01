#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    double a,b,c,r,k;
    while(cin>>a>>b>>c)
    {
        if(a==0||b==0||c==0)printf("The radius of the round table is: 0.000\n");
       else
       {
        k=(a+b+c)/2;
        r=sqrt((k-a)*(k-b)*(k-c)/k);
        //cout<<r<<endl;
        printf("The radius of the round table is: %.3lf\n",r);

       }
    }

    return 0;
}
