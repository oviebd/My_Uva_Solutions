#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

main()
{
    int t,a[4],i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
     cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    printf("Case %d: %d\n",i,a[1]);

        }
    return 0;
}
