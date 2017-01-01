#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>

using namespace std;

int prime(int num)
{
    int i,flag=1;
    if(num==0||num==1)
    {
       flag=0;
        return flag;

    }
        // num=sqrt(num);
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
           flag=0;
           break;
        }
    }
    return flag;
}

int main()
{
    int test,i,j,k,l,count[128],a;
    char ch[2010];
    cin>>test;
    for(k=1;k<=test;k++)
    {
        scanf("%s",ch);
        memset(count,0,sizeof(count));
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            count[ch[i]]++;
        }
        printf("Case %d: ",k);
        int ovie=0;
        for(i='0';i<='z';i++)
        {
            // cout<<count[i]<<endl;
             a=prime(count[i]);
            if(a==1)
            {
                printf("%c",i);
                ovie=1;
            }

        }
        if(ovie==0)printf("empty");
        cout<<endl;

    }
    return 0;
}
