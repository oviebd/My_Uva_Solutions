#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#define max 5000000
using namespace std;

main()
{
   long long int i,test,land[100],sum,total,p,price,x;
    cin>>test;
    while(test--)
    {
        int c=0;
        sum=0;
        while(cin>>price)
        {
            //c++;
            if(price==0)break;
            land[c]=price;
            c++;
        }
        sort(land,land+c);

      /*  for(i=0;i<c;i++)
        {
            cout<<land[i]<<" ";
        }
        cout<<endl;*/

        int a=1,flag=0;

        for(i=c-1;i>=0;i--)
        {
            x=pow(land[i],a);
            //cout<<x<<endl;
            p=2*x;
            sum=sum + p;
            if(sum>max)
            {
                flag=1;
                break;
            }
            a++;
        }
       if(flag==0)cout<<sum<<endl;
        else cout<<"Too expensive"<<endl;
       //cout<<sum<<endl;
    }

    return 0;
}
