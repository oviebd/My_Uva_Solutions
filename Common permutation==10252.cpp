#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

main()
{
    char str1[1100],str2[1100],st[1100];
    int i,j,flag[1100],l1,l2,count;
    while(gets(str1))
    {
        gets(str2);
        count=0;
        for(i=0;i<1100;i++)
        {
            flag[i]=0;
        }
       // puts(str1);
       // puts(str2);

        l1=strlen(str1);
        l2=strlen(str2);
        if(l1>l2)
        {
            for(i=0;i<l2;i++)
            {
                for(j=0;j<l1;j++)
                {
                    if((str2[i]==str1[j])&&flag[j]==0)
                    {
                        st[count]=str2[i];
                        count++;
                        flag[j]=1;
                        break;
                    }
                }
            }

            //cout<<st<<endl;
        }

        else   //l2>=l1
        {
            for(i=0;i<l1;i++)
            {
                for(j=0;j<l2;j++)
                {
                    if((str1[i]==str2[j])&&flag[j]==0)
                    {
                        st[count]=str1[i];
                        count++;
                        flag[j]=1;
                        break;
                    }
                }
            }

        }

        st[count]='\0';
       // puts(st);
        sort(st,st+count);
        puts(st);


    }

    return 0;
}
