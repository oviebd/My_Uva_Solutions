#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

main()
{
    int i,j,mid,test,n,array[1000],sum,dif;
    cin>>test;
    while(test--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }
        if((n%2)==0)mid=(n/2)-1;
        else mid=n/2;
        sort(array,array+n);

        for(i=0;i<mid;i++)
        {
            dif=array[mid]-array[i];
            sum=sum+dif;
        }
        for(i=mid+1;i<n;i++)
        {
            dif=array[i]-array[mid];
            sum+=dif;
        }

        cout<<sum<<endl;
    }

    return 0;
}
