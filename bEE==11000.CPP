#include<iostream>
#include<stdio.h>
using namespace std;
main()

{
   double male,female,m,total,year,i;
    while(1)
    {
        cin>>year;
        if(year==-1)break;
        female=1;
        male=0;
        total=1;

        for( i=1;i<=year;i++)
        {
            m=male;
            male=male+female;
            female=m+1;
            total=male+female;
        }

       // cout<<male<<" "<<total<<endl;
       printf("%.0lf %.0lf\n",male,total);
    }
   return 0;
}
