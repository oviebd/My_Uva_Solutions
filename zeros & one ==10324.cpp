#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std ;

main()
{
    char in[1000009];
    int a[100000],b[100000],c,d,i,j,k,m,n,num,flag,l,test=0;
    while(cin>>in)
    {
        test++;
        l=strlen(in);
        //if(l==1)break;
        cin>>num;
        for(i=0;i<num;i++)
        {
            cin>>a[i]>>b[i];
        }
        printf("Case %d:\n",test);
        for(i=0;i<num;i++)
        {
            if(a[i]>=b[i])
            {
                c=a[i];
                d=b[i];
            }

            if(a[i]<b[i])
            {
                c=b[i];
                d=a[i];
            }
            for(k=d;k<=c;k++)
            {
                if(in[d]==in[k])flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)cout<<"Yes"<<endl;
            if(flag==0)cout<<"No"<<endl;


        }

        if(l==1)break;
    }
    return 0;


}
