#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

main()
{
    char ch[100];
    int array[100],count=0,m=0,i,j;
    for(i=0;i<100;i++)
    {
        array[i]=0;
    }
    while(gets(ch))
    {
        int l=strlen(ch);
        for(i=0;i<l;i++)
        {
             if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))count++;
              if(ch[i]==' '||ch[i]=='?'||ch[i]=='!'||ch[i]==','||ch[i]=='.'||(i==l-1&&ch[i]!='-'))
                   {
                       //cout<<count<<endl;
                       array[count]++;
                       if(count>m)m=count;
                       count=0;
                       //cout<<"fool"<<endl;
                   }
        }
        if(l==1&&ch[0]=='#')
        {
            for(j=1;j<=m;j++)
            {
               if(array[j]) printf("%d %d\n",j,array[j]);
            }

       for(i=0;i<100;i++)
       {
        array[i]=0;
        }
        m=0;
        cout<<endl;

         }

    }
    return 0;
}
