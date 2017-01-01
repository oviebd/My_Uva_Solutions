#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int e,f,c,total,a,b,count,test;
    cin>>test;
    while(test--)
    {
        cin>>e>>f>>c;
        total=e+f;
        count=0;
        while(total>=c)
        {
            a=total/c;
            b=total%c;
            count=count+a;
            total=a+b;
        }
        cout<<count<<endl;
    }
    return 0;
}
