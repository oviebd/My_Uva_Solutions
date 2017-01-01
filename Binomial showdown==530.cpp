#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

long long gcd(long long a,long long b)
{
    if((a%b)==0)return b;
    else return gcd(b,a%b);
}

void dividygcd(long long &a , long long &b)
{
    long long g=gcd(a,b);
    a=a/g;
    b=b/g;
}


long long c(long long n , long long k)
{
    long long numerator=1,denominator=1,mul,div,i;
    if(k>n/2)k=n-k;
    for(i=k;i;i--)
    {
        mul=n-k+i;
        div=i;
        dividygcd(mul,div);
        dividygcd(numerator,div);
        dividygcd(mul,denominator);
        numerator=numerator*mul;
        denominator=denominator*div;
    }

    return numerator/denominator;
}

main()
{
    long long int n,k,i,res;
    while(cin>>n>>k)
    {
        if(n==0&&k==0)break;
        res=c(n,k);
        cout<<res<<endl;
        //printf("%llu things taken %llu at a time is %llu exactly.\n",n,k,res);
    }

    return 0;
}
