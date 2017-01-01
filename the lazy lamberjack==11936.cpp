#include<iostream>
#include<algorithm>
using namespace std;

/*int squre(int a )
{
    int squre=a*a;
    return squre ;
}*/

main()
{
    int test,a[4],b,c,d;
    cin>>test;
    while(test--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);    // sorting assending form a[0]<a[1]<<a[2]
        //cout<<a[0]<<"   "<<a[1]<<endl;
       // b=squre(a[2]);
       // c=squre(a[1]);
        //d=squre(a[0]);
        int sum=a[1]+a[0];
        if(sum>a[2])cout<<"OK"<<endl;
        else cout<<"Wrong!!"<<endl;
    }
    return 0;
}
