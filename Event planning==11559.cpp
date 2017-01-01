#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int n,b,p,h,w,cost,bed[100],minimum_cost,final_cost;
    int i,j;
    while(cin>>n>>b>>h>>w)
    {
        minimum_cost=10000000;
        //final_cost=0;
        //cout<<"Min Cost : "<<minimum_cost<<endl;
        for(i=1;i<=h;i++)
        {
            cin>>cost;
            for(j=0;j<w;j++)
            {
                cin>>bed[j];
            }

            for(j=0;j<w;j++)
            {
                if(bed[j]>=n)
                {
                    final_cost=n*cost;
                    if(final_cost<minimum_cost)minimum_cost=final_cost;
                    break;
                }


            }

           // if(final_cost<minimum_cost)minimum_cost=final_cost;

        }

       // cout<<"Cost : "<<minimum_cost<<endl<<endl;

        if(minimum_cost<=b)cout<<minimum_cost<<endl;
        else cout<<"stay home"<<endl;
    }
}
