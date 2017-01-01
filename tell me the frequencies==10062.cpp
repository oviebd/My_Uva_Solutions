#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

main()
{
    char ch[1100];
    int fre[200],asci[200],i,j,l,count,in[200];
    int test=1;
    while(gets(ch))
    {
        if(!test)cout<<endl;
        test=0;
        for(i=0;i<150;i++)
        {
        in[i]=0;
        asci[i]=0;
        fre[i]=0;
        }

        count=0;
        l=strlen(ch);
        int max=0;
        for(i=0;i<l;i++)
        {
            in[ch[i]]++;
        }

        for(i=0;i<150;i++)
        {
            if(max<in[i])max=in[i];
        }
       // cout<<max<<endl;

       for(i=1;i<=max;i++)
       {
           for(j=150;j>=28;j--)
           {
               //if(i==in[j])cout<<j<<" "<<i<<endl;
             if(i==in[j])  printf("%d %d\n",j,i);
           }
       }
      // cout<<endl;


    }

    return 0;
}
