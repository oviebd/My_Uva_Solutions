#include<iostream>
#include<stdio.h>
#include<cmath>
#define max1 18500000
//#define max1 20000000
using namespace std;

 unsigned long long int list[max1],p1[max1],p2[max1],a,i,j,prime=0,m=1,n=1,test[max1],count=1,x,k;


int twin_prime()
{
   for(i=2;i<=max1;i++)test[i]=1;

    k=2;

    for(i=3;i<=sqrt(max1);i++)
    {
        for(j=k+k;j<=max1;j=j+k)
        {

            test[j]=0;
        }

        k++;
        for(;!test[k];k++);
    }



        for(i=2;i<=max1;i++)
        {
            if(test[i]&&test[i+2])
            {

                     p1[m]=i;
                    p2[n]=i+2;
                    m++;
                    n++;
            }
        }


   }


main()
{
    twin_prime();
    unsigned long long int input;
   // cout<<"kkj"<<endl;
   while(cin>>input)
    {
         printf("(%llu, %llu)\n",p1[input],p2[input]);
    }



    return 0;
}
