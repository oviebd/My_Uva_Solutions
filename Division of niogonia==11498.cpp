#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int x,y,a,b,t,i;
    while(cin>>t)
    {
        if(t==0)break;
        cin>>a>>b;
        for(i=0;i<t;i++)
        {
            cin>>x>>y;
            if(a==x||b==y)cout<<"divisa"<<endl;
            else if (x>a&&y>b)cout<<"NE"<<endl;
            else if (x<a&&y>b)cout<<"NO"<<endl;
            else if(x<a&&y<b)cout<<"SO"<<endl;
            else if(x>a&&y<b)cout<<"SE"<<endl;
        }
    }

    return 0;
}
