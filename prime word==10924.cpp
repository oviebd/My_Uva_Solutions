#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#define max 2000
using namespace std;

bool prime[3000];

bool prime_store()
{
    int i,j,k=2;
    for(i=1;i<=max;i++)prime[i]=true;

    for(i=2;i<=sqrt(max);i++)
    {

       for(j=k+k;j<=max;j=k+j)
       {
           prime[j]=false;
       }
       k++;
       for(;!prime[k];k++);
    }

    for(i=1;i<=100;i++)
    {
     // if(prime[i])  cout<<i<<"   ";
    }

}

main()
{
    char input[30];
    int l,sum,digit,i;
     prime_store();
    while(gets(input))
    {
        l=strlen(input);
        sum=0;
        for(i=0;i<l;i++)
        {
            if(input[i]>='a'&&input[i]<='z')digit=input[i]-96;
            else if(input[i]>='A'&&input[i]<='Z')digit=input[i]-64+26;
            sum=digit+sum;
           // cout<<sum<<endl;

        }

        //cout<<sum<<endl;
            if(prime[sum])cout<<"It is a prime word."<<endl;
            else cout<<"It is not a prime word."<<endl;
    }

    return 0;

}

