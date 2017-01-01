#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

main()
{
    char ch[1100];
    int fre[200],asci[200],i,j,l,count,in[200],test=1;
    while(gets(ch))
    {
        if(!test)cout<<endl;
        test=0;
        for(i=0;i<150;i++)
        {
        in[i]=0;
        asci[i]=0;
        fre[i]=0;
        }

        count=0;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            in[ch[i]]++;
        }

        for(i=0;i<l;i++)
        {

        }

        for(i=0;i<150;i++)
        {
            if(in[i])
            {
                fre[count]=in[i];   //fre is the frequency of charecter .
                asci[count]=i;      // asci is the asci value of charecter .
                count++;
            }
        }

       /* for(i=0;i<count;i++)
        {
            cout<<"i = "<<asci[i]<<"  fre = "<<fre[i]<<endl;
        }*/

        for(i=count-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(fre[j]>fre[j+1])    //sorting  fre and also change the index of asci while sorting happened .
                {
                    int temp1 = fre[j];
                    fre[j]=fre[j+1];
                    fre[j+1]=temp1;

                    int temp2=asci[j];
                    asci[j]=asci[j+1];
                    asci[j+1]=temp2;
                }
            }
        }


       /* for(i=0;i<count;i++)
        {
            //cout<<"After : "<<endl
            cout<<"i = "<<asci[i]<<"  fre = "<<fre[i]<<endl;
        }*/

        for(i=0;i<count;i++)       // if two fre is same then firstly manage  the higher asci value first .
        {
            for(j=count-1;j>i;j--)
            {
                if((fre[j]==fre[j-1])&&(asci[j]>asci[j-1]))
                {

                    int temp3=asci[j];
                    asci[j]=asci[j-1];
                    asci[j-1]=temp3;
                }
            }
        }


     /*   cout<<endl<<"after : "<<endl;

         for(i=0;i<count;i++)
        {
            cout<<"i = "<<asci[i]<<"  fre = "<<fre[i]<<endl;
        }*/

        for(i=0;i<count;i++)
        {
            cout<<asci[i]<<" "<<fre[i]<<endl;
        }
    }

    return 0;
}
