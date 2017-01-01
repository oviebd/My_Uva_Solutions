#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
int prime[2200];

int prime_list()
{
    int i,j,p,flag;
//    prime[1]=0,flag[2]=1;
    for(i=2;i<2002;i++)
    {
        p=sqrt(i);
        flag=1;        //while flag=1 then prime when flag=0 not peime then
        for(j=2;j<=p;j++)
        {
            if((i%j)==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)prime[i]=1; //while i is a prime num .
        else prime[i]=0;
    }
}

main()
{
    int i,j,k,test,l,flag,fre[200];
    char ch[2200],t[10];
    prime_list();
    for(i=0;i<2100;i++)
    {
       // cout<<prime[i]<<"\t";
    }
    gets(t);
    test=atoi(t);
   // cout<<test;
  for(j=1;j<=test;j++)
   {
       gets(ch);
       l=strlen(ch);
       for(i=20;i<150;i++)
       {
           fre[i]=0;
       }
       for(i=0;i<l;i++)
       {
           if(isalpha(ch[i])||(ch[i]>='0'&&ch[i]<='9'))fre[ch[i]]++;
       }
       printf("Case %d: ",j);
       flag=0; //is used for checking is there any primr frequency is placed or not
       for(i=20;i<150;i++)
       {
           if(fre[i])
           {
               if(prime[fre[i]])
               {
                   printf("%c",i);
                   flag=1;
               }
           }
       }
       if(flag)cout<<endl;
       else printf("empty\n");
   }

    return 0;
}
