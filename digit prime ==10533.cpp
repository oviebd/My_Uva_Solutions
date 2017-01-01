#include<iostream>
#include<cstdio>
#include<cmath>
# define max 1000000-1
using namespace std;

int prime[max],d_prime[max];

int cive_prime()
{
    int i,j,k=2,n,x,sum,count;

    for(int i=2;i<=max;i++)
{
    prime[i]=1;
   // d_prime[i]=0;
}
prime[1]=0;

    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<=max;j=j+k)
        {
            prime[j]=0;
        }
        k++;
         for(;!prime[k];k++);
    }

    count=0;

    for(i=1;i<=max;i++)
    {
        n=i;
        sum=0;
        if(prime[i])
        {
            while(n>0)
              {
                x=n%10;
                sum=x+sum;
                n=n/10;
              }
          //sum=sum+n;
         // cout<<sum<<endl;
          if(prime[sum])count++;
        }

        d_prime[i]=count;

    }

}

int main()
{
    int test,i,a,b,res;
   cive_prime();
   //cout<<prime[1];
    //cin>>test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&a,&b);
        res=d_prime[b]-d_prime[a-1];
        printf("%d\n",res);
    }
    return 0;
}
