#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

main()
{
    int first,second,final,attend,c_test[10],sum,i,j,test;
    cin>>test;
    for(int k=1;k<=test;k++)
    {
        cin>>first>>second>>final>>attend;
        sum=0;
        for(i=0;i<3;i++)
        {
            cin>>c_test[i];
        }
        sort(c_test,c_test+3);
        sum=first+second+final+attend+(c_test[1]+c_test[2])/2;
        //cout<<sum<<endl;
        printf("Case %d: ",k);
        if(sum>=90)cout<<"A"<<endl;
        else if(sum<90&&sum>=80)cout<<"B"<<endl;
        else if(sum<80&&sum>=70)cout<<"C"<<endl;
        else if(sum<70&&sum>=60)cout<<"D"<<endl;
        else if(sum<60)cout<<"F"<<endl;

        }

        return 0;

        return 0;
}
