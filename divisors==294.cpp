#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    long long n,l,h,i,test,j,count,max,x,m;
    int flag;
    cin>>test;

    while(test--)
    {
        cin>>l>>h;
        {
            max=x=0;
            for(i=l;i<=h;i++)
            {
                flag=0;
                count=0;
               // x=0;
                m=sqrt(i);
                if((m*m)==i)flag=1;  //pyrno borgo sonkha
                for(j=1;j<=m;j++)
                {
                    if((i%j)==0)
                    {
                        count=count+2;
                    }
                }

                if(flag==1)count=count-1;
                if(count>max)
                {
                    max=count;
                    x=i;
                }
            }

           // cout<<x<<" "<<max<<endl;
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,x,max);

        }


    }

    return 0;

}
