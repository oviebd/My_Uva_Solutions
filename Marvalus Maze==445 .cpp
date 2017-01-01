#include<stdio.h>
#include<iostream>
using namespace std;

main()
{
    char ch;
    int i,c,count=0;

    while((ch=getchar())!=EOF)
    {
       // cout<<ch<<endl;
      // if(ch=='\n')cout<<'\n';
       if(ch>=48&&ch<=57)
       {
           c=ch-48;
           count=count+c;
           //cout<<count;
       }

        if((ch=='b')||(ch>=65&&ch<=127)||ch=='*')
        {
            if(ch=='b')ch=' ';
            for(i=0;i<count;i++)
            {
                cout<<ch;
            }
            count=0;
        }

       if(ch=='!'||ch=='\n')
        {
            cout<<"\n";
        }

       /* if(ch=='\n')
        {
            cout<<"\n";
        }*/

      /* if((ch>=65&&ch<=127)||ch=='*')
       {
           for(i=0;i<count ;i++)
        {
            cout<<ch;
        }
      count=0;
       }*/

       // if(ch=='\n')cout<<"\n";
    }
    //if(ch=='\n')cout<<"\n";
   // cout<<"\n";
    return 0;
    // cout<<"\n";

}
