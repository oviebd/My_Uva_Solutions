#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int test,t,n,m,time,i,j,a[20000],position;
    cin>>test;
    while(test--)
    {
        cin>>n>>t>>m;
        for(i=1;i<=m;i++)
        {
            cin>>a[i];
        }

        position=time=0;

        if((m%n)==0)
        {
          position=n+n;
          time=a[n]+2*t;
        }
        else
        {
            position=(m%n)+n;
            time=a[m%n]+2*t;
        }

        for(i=position;i<=m;i=i+n)
        {
            if(time>=a[i])time=time+2*t;
            else time=a[i]+2*t;
        }

        time=time-t;
        cout<<time<<" "<<(m+n-1)/n<<endl;
    }

    return 0;

}
