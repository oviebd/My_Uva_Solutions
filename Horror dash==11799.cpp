#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

main()
{
    int test,student,speed[10100],i,j;
    cin>>test;
    for(j=1;j<=test;j++)
    {
        cin>>student;
        for(i=0;i<student;i++)
        {
            cin>>speed[i];
        }

    sort(speed,speed+student);
    /*for(i=0;i<student;i++)
    {
        cout<<speed[i]<<endl;
    }*/
    //cout<<speed[student-1]<<endl;
    printf("Case %d: %d\n",j,speed[student-1]);
    }
    return 0;
}
