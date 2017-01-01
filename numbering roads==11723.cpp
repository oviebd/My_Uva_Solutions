#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int road,number,need,count=0;
    while(cin>>road>>number)
    {
        if(road==0&&number==0)break;
        count++;
        need=(road-number)/number;
        if(road>number&&(road%number)!=0)need++;
        if(need<=26)printf("Case %d: %d\n",count,need);
        if(need>26)printf("Case %d: impossible\n",count);
    }
    return 0;

}
