#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int test,year1,year2,year,month1,month2,day1,day2,i;
    cin>>test;
    for(int k=1;k<=test;k++)
    {
        //cout<<endl;
        scanf("%d/%d/%d",&day1,&month1,&year1);
        scanf("%d/%d/%d",&day2,&month2,&year2);
        //cout<<day2<<endl<<month2<<endl;
        year=year1-year2;
        if(month2>month1)year--;
        else if((month1==month2)&&day2>day1)year--;
        //cout<<year<<endl;
        if(year<0)printf("Case #%d: Invalid birth date\n",k);
        else if(year>130)printf("Case #%d: Check birth date\n",k);
        else printf("Case #%d: %d\n",k,year);

    }

    return 0;
}
