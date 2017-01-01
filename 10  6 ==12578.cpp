#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1.0)
using namespace std;

main()
{
    int test,l,i;
    double w,r,rect_area,circle_area;
    cin>>test;
    while(test--)
    {
        cin>>l;
        w=(6*l*1.00)/10;
        r=(l*1.00/5);
        circle_area=PI*pow(r,2);
        rect_area=(l*w)-circle_area;
        printf("%.2lf %.2lf\n",circle_area,rect_area);
    }
    return 0;
}
