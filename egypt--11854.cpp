#include<iostream>
#include<algorithm>
//#include<cmath>
using namespace std;

main()
{
    int a[10],b,c,d,e,f=1;
   while( cin>>a[0]>>a[1]>>a[2])
   {
    if(a[0]==0&&a[1]==0)f=0;
    if(f==0&&a[2]==0)return 0;
    sort(a,a+3);
    b=a[0]*a[0];
    c=a[1]*a[1];
    d=a[2]*a[2];
    e=b+c;
    if(e==d)cout<<"right"<<endl;
    else cout<<"wrong"<<endl;
   }

    return 0;
}
