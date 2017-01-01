#include<iostream>
#include<cstring>
using namespace std;

main()
{
    int l,m,group,initial,end,i,j;
    char ch[100];
    while ( cin>>group)
    {
        if(group==0)break;
    cin>>ch;
   // cin>>group;
    l=strlen(ch);
    m=l/group;
    initial=0,end=m-1;

    for(j=0;j<group;j++)
    {
        for(i=end;i>=initial;i--)
        {
            cout<<ch[i];
        }
        end=end+m;
        initial=initial+m;
    }
    cout<<endl;
    }

    return 0;
}
