#include<iostream>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
unsigned long long int fib[50];

void list_fibbo()
{
    fib[0]=1;
    fib[1]=2;
    for(int i=2;i<47;i++)
    {
        fib[i]=fib[i-2]+fib[i-1];
        //cout<<fib[i]<<"\t";
    }
}

main()
{
    char input[110],in[110],out[110];
    unsigned long long int max;
    list_fibbo();
    int i,j,test,n,num[100],count,pos;
    cin>>test;
    for(int k=1;k<=test;k++)
    {
        cin>>n;
        max=0;
       // cout<<n;
        for(i=0;i<n;i++)
        {
           cin>>num[i];
           if(max<num[i])max=num[i];
        }
        for(i=0;i<47;i++)
        {
            if(max==fib[i])
            {
                pos =i;
                break;
            }
        }
        getchar();
        gets(input);
        int len=strlen(input);
        count=0;
        for(i=0;i<len;i++)
        {
            if(isupper(input[i]))
            {
                in[count]=input[i];
                count++;
            }
        }

        in[count]='\0';

       bool array[100];
        for(i=0;i<100;i++)array[i]=false;

        for(i=0;i<n;i++)
        {
            for(j=0;j<47;j++)
            {
                if(num[i]==fib[j])
                {
                    out[j]=in[i];
                    array[j]=true;
                    break;
                }
            }
        }

        for(i=0;i<pos;i++)
        {
            if(array[i]==false)out[i]=' ';
        }
        out[pos+1]='\0';
        puts(out);
       // free(out);
       out[0]='\0';





    }

    return 0;

}
