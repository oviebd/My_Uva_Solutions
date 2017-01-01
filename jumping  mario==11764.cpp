#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int test,jump[100],num,i,j,k,high,low;
    cin>>test;
    for(k=1;k<=test;k++)
    {
        cin>>num;
        for(i=0;i<num;i++)
        {
            cin>>jump[i];
        }
        high=0,low=0;
        for(j=0;j<=num-2;j++)
        {
            if(jump[j]<jump[j+1])high++;
            if(jump[j]>jump[j+1])low++;
        }
        //cout<<high<<" "<<low<<endl;
        printf("Case %d: %d %d\n",k,high,low);
    }
    return 0;
}
