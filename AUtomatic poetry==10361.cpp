#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

main()
{
    char a[110],b[110],array[100],num[10] ;
    int n,i,j,p[10],ov,l,c,k;
   gets(num);
   sscanf(num,"%d",&n);
   // cin>>n;
    for(k=1;k<=n;k++)
    {
        ov=0,c=0;
        gets(a);
        gets(b);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]!='<'&&a[i]!='>')
            {
                cout<<a[i];
            }
        }
        cout<<endl;
        for(i=0;i<l;i++)
        {
            if(a[i]=='<'||a[i]=='>')
            {
                ov++;
                p[ov]=i;
            }
        }
        //cout<<p[4]<<endl;
        for(i=(p[3]+1);i<p[4];i++)
        {
            c++;
            array[c]=a[i];
        }
        for(i=(p[2]+1);i<p[3];i++)
        {
            c++;
            array[c]=a[i];
        }
        for(i=(p[1]+1);i<p[2];i++)
        {
            c++;
            array[c]=a[i];
        }
        for(i=(p[4]+1);i<l;i++)
        {
            c++;
            array[c]=a[i];
        }


        int m=strlen(b);
        for(i=0;i<m;i++)
        {
            if(b[i]!='.')
            {
                cout<<b[i];
            }
        }

         for(i=1;i<=c;i++)
        {
            cout<<array[i];
        }
        cout<<endl;

    }
    return 0;
}
