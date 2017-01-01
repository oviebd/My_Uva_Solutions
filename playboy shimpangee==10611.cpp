#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int m,l,lady[50010],man[25010],i,j,k,flag,ovie;
    cin>>l;
    for(i=0;i<l;i++)
    {
        cin>>lady[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>man[i];
    }

    for(i=0;i<m;i++)
    {
       // if(flag==1)break;
       flag=0,ovie=0;
        for(j=l-1;j>=0;j--)
        {
            if(lady[j]<man[i])
            {
                cout<<lady[j]<<" ";
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<"X ";
            for(j=0;j<l;j++)
            {
                if(lady[j]>man[i])
            {
                cout<<lady[j]<<endl;
                ovie=1;
                break;
            }

            }


       // if(flag==0)cout<<"X ";
         if(ovie==0)cout<<"X"<<endl;
    }
   // if(flag==0)cout<<"X "
   /*  for(i=0;i<m;i++)

    {
        if(ovie==1)break;
        for(j=0;j<l;j++)
        {
            if(lady[j]>man[i]&&lady[j-1]<=man[i])
            {
                cout<<lady[j]<<endl;
                ovie=1;
                break;
            }
        }
    }
    if(ovie==0)cout<<"X"<<endl;*/
    return 0;

}
