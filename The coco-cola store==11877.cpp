#include<iostream>

using namespace std;

main()
{
    int n,a,b,c,d;
    while(cin>>n)
    {
        if(n==0)break;
        b=0;

        while(n>=3)
        {
            c=n/3;
            d=n%3;
            a=c;
            n=c+d;

            b=a+b;
        }
        if(n==2)(b++);
        cout<<b<<endl;
    }
    return 0;
}
