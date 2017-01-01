#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>

using namespace std;

main()
{
    int test,res,i,j,n,a,b,c,d,e,f;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>n;
        a=567*n;
        b=a/9;
        c=b+7492;
        d=c*235;
        e=d/47;
        f=e-498;

        res=f/10;

        res=res%10;

        if(res<0) res=res*(-1);

        cout<<res<<endl;
    }

    return 0;

}
