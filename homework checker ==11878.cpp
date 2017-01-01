#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
main()
{
    int a,b,c,d,count=0;
    char x,y,st[10];
    while(scanf("%d%c%d%c%s",&a,&x,&b,&y,&st)==5)
    {
       // cout<<a<<" "<<b<<" "<<x<<" "<<c<<y<<endl;
       c=atoi(st);
       if(x=='+')
       {
           if((a+b)==c)count++;
       }
       else
       {
           if((a-b)==c)count++;
       }

    }

    cout<<count<<endl;
    return 0;
}
