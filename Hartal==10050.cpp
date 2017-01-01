#include<iostream>
#include<stdio.h>

using namespace std;
main()
{
    int test,party,day,d[4000],p[110],i,j,k,l,m,count;
    cin>>test;
    for(m=1;m<=test;m++)
    {
        cin>>day;
        cin>>party;
        count=0;

        for(j=0;j<party;j++)
        {
            cin>>p[j];
        }

        for(j=1;j<=day;j++)
        {
            d[j]=1;
        }

        for(j=0;j<party;j++)
        {
            for(i=p[j];i<=day;)
            {
                d[i]=0;
                if((i%7)==0||(i%7)==6)d[i]=1;
                i=i+p[j];
            }
        }

        for(i=1;i<=day;i++)
        {
            if(d[i]==0)count++;
        }

       /*for(i=1;i<=day;i++)
        {
            printf("%d\t",d[i]);
        }  */

        cout<<count<<endl;


    }
    return 0;
}
