#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

main()
{
    long long int test,i,j,k,l,sum,flag;
    int value[10],ov[1000];
//value[1]=1,value[2]=10,value[3]=100,value[4]=1000,value[5]=10000,value[6]=100000,value[7]=1000000;
    //int b=0,u=0,s=0,p=0,p=0,f=0,t=0,m=0,ovie,omie,count;
    char ch[1000];
    cin>>test;
    for(k=0;k<test;k++)
    {
        int b=0,u=0,s=0,p=0,f=0,t=0,m=0,ovie,omie,count;
         value[1]=1,value[2]=10,value[3]=100,value[4]=1000,value[5]=10000,value[6]=100000,value[7]=1000000;
        scanf("%s",&ch);
        l=strlen(ch);
        flag=1;
        for(i=0;i<l;i++)
        {
            if(ch[i]=='B'){
                b++;
                ov[i]=1;
            }
            if(ch[i]=='U')
            {
                u++;
                ov[i]=2;
            }
            if(ch[i]=='S')
            {
                s++;
                ov[i]=3;
            }
            if(ch[i]=='P')
            {
            p++;
            ov[i]=4;
            }
            if(ch[i]=='F')
            {
                f++;
                ov[i]=5;
            }
            if(ch[i]=='T')
            {
                t++;
                ov[i]=6;
            }
            if(ch[i]=='M')
            {
                m++;
                ov[i]=7;
            }
        }
        if(b>9||u>9||s>9||p>9||f>9||t>9||m>9)flag=0;
        ovie=1,omie=1;

        for(i=1;i<l;i++)
        {
            if(ov[i-1]>ov[i])
            {
                ovie=0;
                break;
            }
        }

        for(i=1;i<l;i++)
        {
            if(ov[i-1]<ov[i])
            {
                omie=0;
                break;
            }
        }

        if(ovie==0&&omie==0)flag=0;
       // cout<<flag<<endl;
       if (flag==0)cout<<"error"<<endl;
       sum=0;
       if(flag==1)
       {
           for(i=0;i<l;i++)
           {
               if(ch[i]=='B')sum=sum+value[1];
               if(ch[i]=='U')sum=sum+value[2];
               if(ch[i]=='S')sum=sum+value[3];
               if(ch[i]=='P')sum=sum+value[4];
               if(ch[i]=='F')sum=sum+value[5];
               if(ch[i]=='T')sum=sum+value[6];
               if(ch[i]=='M')sum=sum+value[7];
           }
           cout<<sum<<endl;
       }



    }
    return 0;
}
