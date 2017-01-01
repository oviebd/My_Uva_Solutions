#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

main()
{
    char url[15][115];
    int num[15],test,i,j,max;
    cin>>test;
    for(j=1;j<=test;j++)
    {
        max=0;
        for(i=0;i<10;i++)
        {
            cin>>url[i];
            cin>>num[i];
            if(max<num[i])max=num[i];
        }
       // cout<<max<<endl;
        printf("Case #%d:\n",j);
        for(i=0;i<10;i++)
        {
            if(max==num[i])cout<<url[i]<<endl;
        }
    }

    return 0;

}
