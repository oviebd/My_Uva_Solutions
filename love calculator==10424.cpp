#include<iostream>
#include<cstring>
#include<stdio.h>
 using namespace std;
// char name[100]

/*int summation (char name[100],int length)
{
    int sum=0;
    cout<<name<<endl;
    for(int i=0;i<length;i++)
    {
        if(name[i]>64&&name[i]<91) sum+=((name[i]-'A')+1);
        if(name[i]>96&&name[i]<123) sum+=((name[i]-'a')+1);

        }
        cout<<"endl"<<endl;

        return sum;

        }*/

int count(int sum)
{
    while(sum>=10)
    {
        sum=(sum/100)+(sum%100);
        sum=(sum/10)+(sum%10);
    }
    return sum;
}

double calculator(int me,int lover)
{
    double result ;
    result=(lover*1.00/me*1.00)*100;
    return result;
}

int main()
{
   char ovie[100] , mydarling [100],c='%';
   int l1,l2,sum1,sum2,i,j,sum;
   double result;
   while(gets(ovie))
   {
       gets(mydarling);
       l1=strlen(ovie);
       l2=strlen(mydarling);

       sum1=0;
       for(int i=0;i<l1;i++)
    {
        if(ovie[i]>64&&ovie[i]<91) sum1+=((ovie[i]-'A')+1);
        if(ovie[i]>96&&ovie[i]<123) sum1+=((ovie[i]-'a')+1);

        }

       // cout<<sum1<<endl;

        sum2=0;
        for(int i=0;i<l2;i++)
    {
        if(mydarling[i]>64&&mydarling[i]<91) sum2+=((mydarling[i]-'A')+1);
        if(mydarling[i]>96&&mydarling[i]<123) sum2+=((mydarling[i]-'a')+1);

        }
       // cout<<sum2<<endl;

        sum1=count(sum1);
        sum2=count(sum2);
        if(sum1>=sum2)result=calculator(sum1,sum2);
        if(sum2>sum1)result=calculator(sum2,sum1);
        //cout<<result<<endl;
        printf("%.02lf %c\n",result,c);



       //sum1=summation(ovie[100],l1);
      // cout<<sum1<<endl<<sum2<<endl;
   }
   return 0;
}
