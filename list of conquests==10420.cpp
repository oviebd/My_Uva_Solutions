#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

main()
{
    int i,j,k,test,count,flag[2010],l,index[2010];
    char country[2010][100],ch[100],t[10],temp[100];
   // freopen("a.txt","r",stdin);
    gets(t);
    test=atoi(t);
   // cout<<test<<endl;
    for(k=0;k<test;k++)
    {
        gets(ch);
        l=strlen(ch);
        count=0;
        for(i=0;i<l;i++)
        {
            if(ch[i]==' ')break;
            country[k][count]=ch[i];
            count++;
           // if(ch[i]==' ')break;
        }
        country[k][count]='\0';
    }

    for(i=0;i<test;i++)
    {
      // puts(country[i]);
        index[i]=0;
        flag[i]=1;
    }

    for(i=test-1;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if((strcmp(country[j],country[j-1]))<0)
            {
                strcpy(temp,country[j]);
                strcpy(country[j],country[j-1]);
                strcpy(country[j-1],temp);
            }
        }
    }

   /* for(i=0;i<test;i++)
    {
        puts(country[i]);
    }*/

    for(i=0;i<test;i++)
    {
        //count=0;
        for(j=0;j<test;j++)
        {
            if((strcmp(country[i],country[j])==0)&&flag[j])
            {
                flag[j]=0;
                index[i]++;
            }
        }
    }

    for(i=0;i<test;i++)
    {
        //cout<<index[i]<<endl;
       if(index[i])
       {
           printf("%s %d\n",country[i],index[i]);
       }
       //cout<<country[i]<<"    "<<index[i]<<endl;
    }

    return 0;
}
