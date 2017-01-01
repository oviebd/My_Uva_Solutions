#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

main()
{
    char ch[200],n_s[10];
    int test,w,b,t,n,a,num,i;
    cin>>test;
    for(int k=1;k<=test;k++)
    {
        //cin>>n;
        //gets(n_s);
        //gets(ch);
        cin>>n_s;
        cin>>ch;
        n=atoi(n_s);
        a=b=t=w=0;
        for(i=0;i<n;i++)
        {
            if(ch[i]=='B')b++;
            if(ch[i]=='W')w++;
            if(ch[i]=='A')a++;
            if(ch[i]=='T')t++;
        }

        num=n-a;
       // int t_num
        if(num==0)printf("Case %d: ABANDONED\n",k);
        else
        {
            if(b==num)printf("Case %d: BANGLAWASH\n",k);
          else  if(w==num)printf("Case %d: WHITEWASH\n",k);
          else  if(w==b)printf("Case %d: DRAW %d %d\n",k,w,t);
           // if(t==num)
          else if(b>w)printf("Case %d: BANGLADESH %d - %d\n",k,b,w);
          else if(w>b)printf("Case %d: WWW %d - %d\n",k,w,b);
        }
    }

    return 0;
}
