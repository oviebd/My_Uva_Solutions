#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

main()
{
    int n,i,j,k;
    double money[1100],sum1,sum2,average,dif;
    while(cin>>n)
    {
        if(n==0)break;
        double sum=0;
        sum1=sum2=0;
        for(i=0;i<n;i++)
        {
            cin>>money[i];
            sum=sum+money[i];
        }
        average=(sum/n);
        //cout<<average<<endl;
        for(i=0;i<n;i++)
        {
            //dif=((money[i]-average)*100)/100;
            //cout<<dif<<endl;

           dif=(double)(long) ((money[i] - average)*100)/100;
           //cout<<dif<<endl;

         // dif=(double)(long)money[i]-average;
         // cout<<dif<<endl;
            if(dif<0)
            {
                dif=(-1.00)*dif;
                sum1=sum1+dif;
                //sum1=sum1-dif;
            }
            else sum2=dif+sum2;
        }
       //cout<<sum1<<"  "<<sum2<<endl;

        if(sum1>=sum2)printf("$%.2lf\n",sum1);
        else printf("$%.2lf\n",sum2);
    }
    return 0;
}
