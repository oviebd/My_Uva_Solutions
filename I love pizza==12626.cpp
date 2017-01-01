#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;

main()
{
    int test,count[10],l,i;
    char in[700];
    cin>>test;
    while(test--)
    {
        cin>>in;
        l=strlen(in);
        for(i=0;i<6;i++)
        {
            count[i]=0;
        }

        for(i=0;i<l;i++)
        {
            if(in[i]=='M')count[0]++;
            if(in[i]=='A')count[1]++;
            if(in[i]=='R')count[2]++;
            if(in[i]=='G')count[3]++;
            if(in[i]=='I')count[4]++;
            if(in[i]=='T')count[5]++;
        }
        count[1]=count[1]/3;
        count[2]=count[2]/2;
        sort(count,count+6);
        cout<<count[0]<<endl;
    }
    return 0;
}
