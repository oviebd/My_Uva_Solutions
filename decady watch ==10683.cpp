#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>

using namespace std;

main()
{
    string time;
    int h,m,s,cc,total;
    int d_time,i;
    //float t=10000000.0/8640000.0;

    while(cin>>time)
    {
       // cin>>time;
        h=((time[0]-48)*10)+(time[1]-48);
        m=((time[2]-48)*10)+(time[3]-48);
        s=((time[4]-48)*10)+(time[5]-48);
        cc=((time[6]-48)*10)+(time[7]-48);
        //cout<<h<<m<<s<<cc<<endl;
        total=((h*3600+m*60)+s)*100+cc;
        //total=total*100;
       // cout<<total<<endl;
        d_time=(10000000.0/8640000.0)*total; //1 day in decimal =10*100*100*100=10000000 cc &&1 day in normal =24*3600*100=8640000cc
        printf("%07d\n",d_time);

    }
    return 0;
}
