#include<iostream>
#include<cstdio>
#include<cstring>
#define size 500

using namespace std;

main()
{
    char in1[size],in2[size];
    int i,j,result[size],carry,test,l1,l2,max,a,b,count,sum;

    cin>>test;

    for(int k=1;k<=test;k++)

    {
        cin>>in1>>in2;
        l1=strlen(in1);
        l2=strlen(in2);
        if(l1>l2)max=l1;
        else max=l2;

        for(i=0;i<max;i++)
        {
            if(l1<=i)in1[i]='0';
            if(l2<=i)in2[i]='0';
        }

        in1[max]='\0';
        in2[max]='\0';

        //cout<<in1<<"  "<<in2<<endl;
        //***********************SUM***************************************************
        sum=carry=a=b=count=0;

        for(i=0;i<max;i++)
        {
            a=in1[i]-'0';
            b=in2[i]-'0';
            sum=a+b+carry;
            carry=sum/10;
           /* if(i!=max-1)
            {
                result[count]=sum%10;
                count++;
            }

            if(i==max-1)
            {
                if(sum>9)
                {
                    result[count]=sum%10;
                    count++;
                    result[count]=sum/10;
                    count++;
                }

                if(sum<9)
                {
                    result[count]=sum;
                    count++;
                }
            }
            */

            result[count]=sum%10;
            count++;

        }

        if(carry>0)
        {
            sum=1;
            result[count]=sum;
            count++;
        }

        //*************************** SUM ***************************************

 int flag=0;

    for(i=0;i<count;i++)
    {
        if(result[i]==0&&flag==0)flag=0;
       else
       {
           cout<<result[i];
           flag=1;
       }
    }

    cout<<endl;

    }

    return 0;

}
