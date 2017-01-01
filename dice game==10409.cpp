#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

main()
{
    int n,top,bottom,east,west,north,south,ovie_top,ovie_bottom;
    char command[15];
    while(cin>>n)
    {
       // cout<<n<<endl;
       if(n==0)break;

        top=1,bottom=6,east=4,west=3,north=2,south=5;
        for(int i=0;i<n;i++)
        {
        scanf("%s",command);

            if(strcmp(command,"south")==0)
            {
                ovie_top=top;
                ovie_bottom=bottom;
                top=north;
                bottom=south;
                north=ovie_bottom;
                south=ovie_top;
            }

            if(strcmp(command,"north")==0)
            {
                ovie_top=top;
                ovie_bottom=bottom;
                top=south;
                bottom=north;
                north=ovie_top;
                south=ovie_bottom;
            }

            if(strcmp(command,"west")==0)
            {
                ovie_top=top;
                ovie_bottom=bottom;
                top=east;
                bottom=west;
                east=ovie_bottom;
                west=ovie_top;
            }

            if(strcmp(command,"east")==0)
            {
                ovie_top=top;
                ovie_bottom=bottom;
                top=west;
                bottom=east;
                east=ovie_top;
                west=ovie_bottom;
            }
        }

        cout<<top<<endl;
    }
    return 0;
}
