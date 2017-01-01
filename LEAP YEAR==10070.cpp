#include<iostream>
#include<cstring>
using namespace std;

int leapyear(int m4,int m100,int m400)
{
    int flag1=0 ;
    if((m400)==0)
    {
        flag1=1;
        cout<<"This is leap year."<<endl;
    }
    else
    {
        if(m4==0&&m100!=0)
        {
            cout<<"This is leap year."<<endl;
            flag1=1;
        }
    }
    return flag1;
}

int huluculu(int m15)
{
    int flag2=0;
    if(m15==0)
    {
        cout<<"This is huluculu festival year."<<endl;
        flag2=1;
    }
    return flag2;
}

int buluculu(int m55)
{
    int flag3=0;
    if(m55==0)
    {
       // if(flag==0)cout<<"This is leap year."<<endl;
        cout<<"This is bulukulu festival year."<<endl;
        flag3=1;
    }
    return flag3;
}

int main()
{
   // int flag1=0,flag2=0,flag3=0,count=0,len,m4=0,m100,m400,m15,m55;
    char year[1000];
    int count=0;
    while(cin>>year)
    {
        int flag1=0,flag2=0,flag3=0,len,m4=0,m100=0,m400=0,m15=0,m55=0;
        len=strlen(year);
        for(int i=0;i<len;i++)
        {
             m4=(m4*10+year[i]-'0')%4;
           // cout<<m4<<endl;
            m55=(m55*10+year[i]-'0')%55;
            m15=(m15*10+year[i]-'0')%15;
            m100=(m100*10+year[i]-'0')%100;
            m400=(m400*10+year[i]-'0')%400;
        }
       // cout<<"M15=="<<m15<<endl;
        //cout<<"M55=="<<m55<<endl;
        if (count>0)cout<<endl;
        count++;

        flag1=leapyear(m4,m100,m400);

        flag2=huluculu(m15);

        if(flag1==1)flag3=buluculu(m55);
        //flag3=buluculu(year,flag1);
        if(flag1==0&&flag2==0&&flag3==0)cout<<"This is an ordinary year."<<endl;
       // cout<<endl;
    }

    return 0;
}
