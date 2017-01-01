#include<iostream>
#include<cstring>;
using namespace std;

main()
{
    int l,count,test;
    char ch[20];
    cin>>test;
    while(test--)
    {
        cin>>ch;
        count=0;
        l=strlen(ch);
        if(l==5)cout<<"3"<<endl;
        else
        {
            if(ch[0]=='t')count++;
            if(ch[1]=='w')count++;
            if(ch[2]=='o')count++;

            if(count>=2)cout<<"2"<<endl;
            else cout<<"1"<<endl;
        }
    }

    return 0;
}
