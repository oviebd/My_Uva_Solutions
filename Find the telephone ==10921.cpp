#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
using namespace std;

main()
{
    char ch[100];
    int i,len,j;
     while(gets(ch))
     {
         len=strlen(ch);
         for(i=0;i<len;i++)
         {
             if(isalpha(ch[i]))
             {
                 if(ch[i]=='A'||ch[i]=='B'||ch[i]=='C')cout<<"2";
                 else if(ch[i]=='D'||ch[i]=='E'||ch[i]=='F')cout<<"3";
                 else if(ch[i]=='G'||ch[i]=='H'||ch[i]=='I')cout<<"4";
                 else if(ch[i]=='J'||ch[i]=='K'||ch[i]=='L')cout<<"5";
                // else if(ch[i]='M'||ch[i]=='N'||ch[i]=='O')cout<<"6";
                else if(ch[i]=='M'||ch[i]=='N'||ch[i]=='O')cout<<6;
                 else if(ch[i]=='P'||ch[i]=='Q'||ch[i]=='R'||ch[i]=='S')cout<<"7";
                 else if(ch[i]=='T'||ch[i]=='U'||ch[i]=='V')cout<<"8";
                 else if(ch[i]=='W'||ch[i]=='X'||ch[i]=='Y'||ch[i]=='Z')cout<<"9";
             }

             else cout<<ch[i];

         }

         cout<<endl;
     }

     return 0;
}
