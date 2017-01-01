#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

main()
{
    int l,i,k,test,j,d,n;
    char ch[500],c;
    cin>>test;
    for(k=1;k<=test;k++)
    {
        cin>>ch;
        l=strlen(ch);
        printf("Case %d: ",k);
        for(i=0;i<l;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
            {
                c=ch[i];
                d=0;
            }
            else
            {
               n=ch[i]-48;

                n=d*10+n;
                d=n;
                if((ch[i+1]>='A'&&ch[i+1]<='Z')||ch[i+1]=='\0')
                {
                   // cout<<"N= "<<n<<endl;
                    while(n--)
                    {
                        cout<<c;
                    }
                }
            }
        }
        cout<<endl;
    }

    return 0;

}
