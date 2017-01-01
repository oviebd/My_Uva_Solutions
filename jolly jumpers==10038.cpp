#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<stdio.h>
using namespace std;
main()
{
    int a[3010],b[3010],size,i,j,flag;
  while(cin>>size)
  {

    flag=1;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<size;i++)
    {
        b[i-1]=abs(a[i]-a[i-1]);
    }
    sort(b,b+size-1);

    for(i=1;i<size;i++)
    {
        if(b[i]==b[i-1])
        {
            flag=0;
            break;
        }

    }
    if(flag==0)cout<<"Not jolly"<<endl;
    else cout<<"Jolly"<<endl;


    /*for(i=0;i<size-1;i++)
    {
        cout<<b[i];
    }*/
  }


    return 0;

}
