#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

main()
{
    int test,num,age[20];
    cin>>test;
    for(int k=1;k<=test;k++)
    {
        cin>>num;
        for(int i=0;i<num;i++)
        {
            cin>>age[i];
        }

        sort(age,num+age);

        int cap=(num+1)/2;
        printf("Case %d: %d\n",k,age[cap-1]);
    }
    return 0;
}
