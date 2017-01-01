#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
#include<cmath>
using namespace std;

main()
{
    char ch[10100],in[10];
    int i,j,count,pos,m,len,sqi,test;
    float sqf;
    gets(in);
    test=atoi(in);
    while(test--)
    {
        gets(ch);
        len=strlen(ch);
        sqf=sqrt(len);
        sqi=sqrt(len);
        if(sqf!=sqi)cout<<"INVALID";
        else
        {
            pos=0,m=0,count=0;
            while(1)
            {
                if(count>=len)break;
                else
                {
                    cout<<ch[pos];
                    count++;
                    pos=pos+sqi;
                    if((count%sqi)==0)
                    {
                        m++;
                        pos=m;
                        //m++;
                    }
                }
            }
        }
        cout<<endl;
    }


    return 0;

}
