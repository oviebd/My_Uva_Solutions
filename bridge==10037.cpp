#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

main()
{
    int time[1100],t,t1,t2,n,test,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        t=t1=t2=0;
        for(i=0;i<n;i++)
        {
            cin>>time[i];
        }
        sort(time,time+n);
        for(i=n-1;i>=3;i-=2)
        {
            t1=time[0]+time[1]*2+time[i]; //0 and 1 going 1st and 0 back , then i and i-1 going and 1 bak (2nd time ) .
            t2=time[0]*2+time[i]+time[i-1]; // 0 and i going 1st and 0 back ,then 0 nad i-1 going and 0 back (2nd time ) .
            if(t1<t2)t+=t1;
            else t+=t2;
        }
        if(i==2)t+=time[0]+time[1]+time[2];
        else if(i==1)t+=time[1];
        else t+=time[0];
        cout<<t<<endl;

         for(i=n-1;i>=3;i-=2)
        {
            t1=time[0]+time[1]*2+time[i];
            t2=time[0]*2+time[i]+time[i-1];

            if(t1<t2)printf("%d %d\n%d\n%d %d\n%d\n",time[0],time[1],time[0],time[i-1],time[i],time[1]);
            else printf("%d %d\n%d\n%d %d\n%d\n",time[0],time[i],time[0],time[0],time[i-1],time[0]);

        }

        if(i==2)printf("%d %d\n%d\n%d %d\n",time[0],time[1],time[0],time[0],time[2]);
        else if(i==1)printf("%d %d\n",time[0],time[1]);
        else printf("%d\n",time[0]);

        if(test)cout<<endl;

    }

    return 0;
}
