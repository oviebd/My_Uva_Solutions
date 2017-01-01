#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

main()
{
    char singular[30] [110],plural[30] [110],word[110];
    int i,x,m,n,a,b,j,l,flag,o;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        scanf("%s %s",&singular[i],&plural[i] );
        }
        /*for(i=0;i<n;i++)
        {
            cout<<singular[i]<<endl<<plural[i] <<endl;
        }*/
        for(j=0;j<m;j++)
        {
            flag=0;
            scanf("%s",word);
            for(i=0;i<n;i++)
            {
                x=strcmp(singular[i],word);
                //cout<<i  <<  x <<endl;
                if(x==0)
                {
                    cout<<plural[i]<<endl;
                    flag=1;
                    break;
                }

            }

            if(flag==0)
            {
               o=strlen(word);
               l=o-1;
              // cout<<word[l-1] <<  word[l]<<endl;
               if(word[l]=='y'&&flag==0&&word[l-1]!='a'&&word[l-1]!='e'&&word[l-1]!='i'&&word[l-1]!='o'&word[l-1]!='u')
               {
                   word[l]='i',word[l+1]='e',word[l+2]='s',word[l+3]='\0';
                   cout<<word<<endl;
                   flag=1;
                   //return 1;
                  // break;
               }

             if(((word[l]=='o')||word[l]=='s'||word[l]=='x')&&flag==0  )
             {
                 word[l+1]='e',word[l+2]='s',word[l+3]='\0';
                 //cout<<word<<endl;
                 printf("%s\n",word);
                 //return 1;
                 flag=1;
                // break;
             }

            if((word[l-1]=='c'&&word[l]=='h')||(word[l-1]=='s'&&word[l]=='h')&&flag==0)
               {
                   word[l+1]='e',word[l+2]='s',word[l+3]='\0';
                   //cout<<word<<endl;
                    printf("%s\n",word);
                   flag=1;
                   //return 1;
                   //break;
               }

               if(flag==0)
               {
                   word[l+1]='s';
                   word[l+2]='\0';
                   //cout<<word<<endl;
                    printf("%s\n",word);
                   flag=1;
                   //return 1;
                   //break;
               }


        }

}

return 0;
    }
