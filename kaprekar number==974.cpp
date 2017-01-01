#include<iostream>
#include<stdio.h>
using namespace std;

unsigned long long int res[40089];

void calculation()
{

    unsigned long long int i,j,num,part1,part2,m;

    for(i=2;i<40001;i++)
    {
        res[i]=0;
    }

    for(i=2;i<40001;i++)
    {
        num=i*i;
        part1=0;
        part2=0;
        m=1;
        while(num>=10)
        {
            part1=num/10;
            part2=(num%10)*m+part2;
            num=num/10;
            m=m*10;

        if(part1!=0&&part2!=0&&part1+part2==i)
        {
            res[i]=1;
            break;
        }
        }
    }

}

main()
{
    calculation();
    unsigned long long int in1,in2,i;
    for(i=2;i<100;i++)
    {
       // cout<<res[i]<<"\t";
    }
    int test,j,flag;
    cin>>test;
    for(j=1;j<=test;j++)
    {
        cin>>in1>>in2;
        flag=0;
        printf("case #%d\n",j);
        for(i=in1;i<=in2;i++)
        {
            if(res[i]==1)
            {
                cout<<i<<endl;
                flag=1;
            }

        }
        if (flag==0)cout<<"no kaprekar numbers"<<endl;
        if(j!=test)cout<<endl;
    }

    return 0;

}
