#include<iostream>
#include<stdio.h>
 using namespace std;

 main()
 {
     int flag,ovie,problem[100],need[100],ready,i,j,count=0;

     while(cin>>ready)
     {
         //cout<<"Case :"<<count<<endl;
         count++;
         if(ready<0)break;
         ovie=0,flag=0;
         for(i=0;i<12;i++)
         {
             cin>>problem[i];
         }
         for(i=0;i<12;i++)
         {
             cin>>need[i];
         }

         // cout<<"Case :"<<count<<endl;
         printf("Case %d:\n",count);

         if(need[0]<=ready)
         {
             cout<<"No problem! :D"<<endl;
             ready=ready-need[0];
             problem[0]=ready+problem[0];
             flag=1;
         }

         if((need[0]>ready)&&flag==0)
         {
             cout<<"No problem. :("<<endl;
             problem[0]=ready+problem[0];
         }

         for(i=1;i<12;i++)
         {
             ovie=0;
             if(need[i]<=problem[i-1])
             {
                 cout<<"No problem! :D"<<endl;
                 problem[i-1]=problem[i-1]-need[i];
                 problem[i]=problem[i-1]+problem[i];
                 ovie=1;
             }
             if(need[i]>problem[i-1]&&ovie==0)
             {
                 cout<<"No problem. :("<<endl;
                 problem[i]=problem[i]+problem[i-1];
             }
         }


     }

     return 0;
 }
