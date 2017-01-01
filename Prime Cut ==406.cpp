#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
# define max 1010
using namespace std;

int prime[max];
int show_prime[max];
int prime_count[max];

void Cive_prime()
{
    int count,counter;
    for(int i=1;i<=max;i++)
    {
        prime[i]=1;
    }

     count=counter=0;

    int k=2;

    for(int i=2;i<=sqrt(max);i++)
    {
        for(int j=k+k;j<=max;j=j+k)
        {
            prime[j]=0;
        }
        k++;
        for(;!prime[k];k++);
    }
    for(int i=1;i<=max;i++)
    {
       // cout<<prime[i]<<" ";
        if(prime[i])
        {
            count++;
            counter++;
          show_prime[counter]=i;
             prime_count[i]=count;
        }

        else prime_count[i]=count;
    }
}

int main()
{
    int a,b,mid,i,strt,end,count,c,x,y;
    Cive_prime();
    while(cin>>a>>b)
    {
        count=prime_count[a];
        //cout<<count<<endl;
       // mid=count/2;
        if((count%2)==0)c=b*2;
        else c=(b*2)-1;
       // mid=(count/2)+1;
       x=count-c;
       y=x/2;

        strt=y+1;
        end=count-(y);
        printf("%d %d: ",a,b);
        //cout<<strt<<"   "<<end<<endl;
        if(c>=count)
        {
            strt=1;
            end=count;
        }

        for(i=strt;i<=end;i++)
        {
            if(i==end) printf("%d",show_prime[i]) ;
           else printf("%d ",show_prime[i]) ;
        }
        cout<<endl<<endl;

    }

    return 0;
}

