#include<iostream>
using namespace std;

main()
{
    int test,array[100],flag1,flag2,i,j;
    cin>>test;
    for(j=0;j<test;j++)
    {
        for(i=0;i<10;i++)
        {
            cin>>array[i];
        }
         flag1=1;
        for(i=1;i<10;i++)
        {
            if(array[i-1]<array[i])
            {
                flag1=0;
                break;
            }
        }

        if(flag1==0)
        {
            flag2=1;
            for(i=1;i<10;i++)
            {
                if(array[i-1]>array[i])
                {
                    flag2=0;
                    break;
                }
            }
        }
        if(j==0)cout<<"Lumberjacks:"<<endl;

        if(flag1==1||flag2==1)
        {
            cout<<"Ordered"<<endl;
        }
        else cout<<"Unordered"<<endl;


        }


}
