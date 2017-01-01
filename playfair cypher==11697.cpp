#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<map>
using namespace std;

main()
{
    char key[1010],text[1010],table[6][6],te[5],tempchar,dummy;
    int i,j,test,k,count,l_key,l_text;
    //freopen("i.txt", "r", stdin);
    gets(te);
    test=atof(te);
    while(test--)
    {
        map <char,int>m;
        int k1,j1,k2,j2;
       // memset(key, 0, sizeof());
        memset(table, NULL, sizeof(table));
        gets(key);
        l_key=strlen(key);
       j=k=0;
       int y=0;
       for(int x=0;x<l_key;x++)
       {
           if(key[x]!=' ')
           {
               key[y++]=key[x];
           }
       }
       key[y]='\0';
      // puts(key);



       for(i=0;i<y;i++)
       {
          // if(key[i]==' ')i++;
           if(i>=l_key)break;
           key[i]=toupper(key[i]);

           if(m.count(key[i])==0)
           {
               m[key[i]]=1;
               table[j][k++]=key[i];

           }
           if(k>=5)
           {
               k=0;
               j++;
           }


       }



       for(i='A';i<='Z';i++)
       {
           if(i=='Q')continue;
            tempchar=i;
           if(m.count(tempchar)==0)
           {
               m[tempchar]=1;
               //cout<<k<<endl;
               table[j][k++]=i;
               //k++;
           }

           if(k>=5)
           {
               k=0;
               j++;
           }

       }


      /*
     for(i=0;i<5;i++)
       {
           for(j=0;j<5;j++)
           {
               cout<<table[i][j]<<"  ";
           }
           cout<<endl;
       }

*/

       gets(text);
       l_text=strlen(text);

       y=0;
       for(int x=0;x<l_text;x++)
       {
           if(text[x]!=' ')
           {
               text[y++]=text[x];
           }
       }
       text[y]='\0';
      // puts(text);

       char a,b,prev;
       int flag=0,flag1=0;

       i=0;
       for(i=0;text[i];)
       {
           //if(text[i]==' ')i++;
           //if(flag==1)a=prev;
           a=toupper(text[i]);
           if(text[i+1] && text[i]!=text[i+1])
           {
               b=toupper(text[i+1]);
               i=i+2;
           }
           else {
               b='X';
               i++;
           }

          /* //flag=0;

         //  if(text[i]==' ')i++;

           if(i>=l_text)
           {
               b='X';
               flag1=1;
           }

           else
           {
               b=toupper(text[i++]);
           }
           if(a==b)
           {
               flag=1;
               prev=b;
               b='X';
           }
           */
          // cout<<a<<"  "<<b<<endl;

           for(j=0;j<5;j++)
           {
               for(k=0;k<5;k++)
               {
                  if(a==table[j][k])
                  {
                      k1=k;
                      j1=j;
                      //cout<<"A= "<<a<< j1 <<k1<<endl;
                  }
                  if(b==table[j][k])
                  {
                      k2=k;
                      j2=j;
                     // cout<<"B= "<<b<<j2  <<k2<<endl;
                  }

               }
               // cout<<a<<" " <<j1<<" "<<k1<<"  "<<j2<<" "<<k2<<"      ";
           }
          // cout<<endl;

           if(k1==k2)
           {
               if(++j1>=5)j1=0;
               a=table[j1][k1];
               if(++j2>=5)j2=0;
               b=table[j2][k2];
           }

           else if(j1==j2)
           {
               if(++k1>=5)k1=0;
               a=table[j1][k1];
               if(++k2>=5)k2=0;
               b=table[j2][k2];
           }

           //else if(j1!=j2&&k1!=k2)
           else
           {
              // cout<<"dgfggf"<<endl;
               a=table[j1][k2];
               b=table[j2][k1];
           }

           cout<<a<<b;

          // if(i>=l_text+1&&flag1==1)break;
          // else if (i>=l_text&&flag==0)break;


       }
       cout<<endl;



    }

    return 0;
}
