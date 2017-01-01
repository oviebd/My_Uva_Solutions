#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


main()
{
    long long a,limit,test=1,i,j,count,b;
    while(cin>>a>>limit)
    {
        b=a;
        count=0;
        if(a<0&&limit<0)break;
        while(1)
        {
            if(a==1)
            {
                count++;
                break;
            }
            if(a>limit)break;
            if((a%2)==0)
            {
                count++;
                a=a/2;
            }
            else
            {
                count++;
                a=(3*a)+1;
            }
        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %ld\n",test,b,limit,count);
        test++;

    }
}
