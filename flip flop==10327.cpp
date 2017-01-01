#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int test,num,count,i,j,array[1010],m;
    while(cin>>num)
    {
        //cin>>num;
        count=0;
        for(i=0;i<num;i++)
        {
            cin>>array[i];
        }

        for(i=num-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(array[j]>array[j+1])
                {
                    m=array[j];
                    array[j]=array[j+1];
                    array[j+1]=m;
                    count++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
