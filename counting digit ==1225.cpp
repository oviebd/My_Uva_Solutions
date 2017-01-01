ami condom
#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int i,j,a,b,c,test,n,array[20];
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<=9;i++)
        {
            array[i]=0;
        }
       // array[0]=1;
        for(i=1;i<=n;i++)
        {
            a=i;
            while(a>0)
            {
                b=a%10;
                c=a/10;
                a=c;
                array[b]++;
            }
        }
        for(i=0;i<9;i++)
        {
            printf("%d ",array[i]);
        }
        cout<<array[9]<<endl;
    }
    return 0;
}
