#include<iostream>
#include<stdio.h>
using namespace std;
#define n 1000010

int a[n];
int b[n];
int result[n];

main()
{
    int sum,carry,i,j,k,test,m;
    cin>>test;
    while(test--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a[i]>>b[i];
        }
        carry=0;
        for(i=m-1;i>=0;i--)
        {
            sum=(a[i]+b[i]+carry)%10;
           //if(i==0)sum=(a[i]+b[i]+carry);
            carry=(a[i]+b[i]+carry)/10;
            result[i]=sum;
        }
        for(i=0;i<m;i++)
        {
            cout<<result[i];
        }

        if(test==0)cout<<endl;
        else cout<<endl<<endl;

    }

    return 0;
}
