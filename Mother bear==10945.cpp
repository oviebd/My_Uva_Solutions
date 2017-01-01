#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

main()
{
    int l,i,j,count;
    char ch[1000],re[1000],ne[1000];

    while(gets(ch))
    {
        if(strcmp(ch,"DONE")==0)break;
        count=0;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
           if(isalpha(ch[i]))
           {
               if(ch[i]>='A'&&ch[i]<='Z')ch[i]=ch[i]+32;
               ne[count]=ch[i];
               count++;
           }
        }

        ne[count]='\0';
      //  puts(ne);
        l=strlen(ne);
        i=0;

        for(j=l-1;j>=0;j--)
        {
            re[i]=ne[j];
            i++;
        }
        re[i]='\0';

        //puts(re);

        if(strcmp(ne,re)==0)cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;

    }

    return 0;
}
