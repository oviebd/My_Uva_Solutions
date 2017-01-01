#include<iostream>
using namespace std ;

main ()
{
    long long int n,a=0,b=1,c,d,i;
    while(cin>>n)
    {
        if(n==0)break ;
        a=0,b=1;
        for(i=0;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
    return 0;
}
