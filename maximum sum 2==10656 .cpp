#include<iostream>
using namespace std;

main()
{
    int n,num,i,j,count,array[1010];
    while(cin>>n)
    {
        if(n==0)break;
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>num;
            if(num!=0)
            {
                array[count]=num;
                count++;
            }
        }

        for(i=0;i<count;i++)
        {
            cout<<array[i];
            if(i<count-1)cout<<" ";
        }
        if(count==0)cout<<"0";
        cout<<endl;
    }
    return 0;
}
