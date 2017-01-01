#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

main()
{
    int num,test,i,j,a,res;
    char plate[20];
    cin>>test;
    while(test--)
    {
        scanf("%3s-%d",&plate,&num);
       // cout<<plate<<endl;
        //cout<<num;
        a=26*26*(plate[0]-'A')+26*(plate[1]-'A')+(plate[2]-'A');
        res=a-num;
        if(res<0)res=res*(-1);
        if(res<=100)cout<<"nice"<<endl;
        else cout<<"not nice"<<endl;

    }

    return 0;
}
