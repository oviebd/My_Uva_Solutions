#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

main()
{
    char name [20][20],song[110][110];
    int i,j,x,n;

    strcpy(name[1],"Happy");
    strcpy(name[2],"birthday");
    strcpy(name[3],"to");
    strcpy(name[4],"you");
    strcpy(name[5],"Happy");
    strcpy(name[6],"birthday");
    strcpy(name[7],"to");
    strcpy(name[8],"you");
    strcpy(name[9],"Happy");
    strcpy(name[10],"birthday");
    strcpy(name[11],"to");
    strcpy(name[12],"Rujia");
    strcpy(name[13],"Happy");
    strcpy(name[14],"birthday");
    strcpy(name[15],"to");
    strcpy(name[16],"you");


 //  for(i=1;i<=16;i++) cout<<name[i]<<endl;

   cin>>n;
   x=0;
   int flag=0;
   for(i=1;i<=n;i++)cin>>song[i];

   if(n==16)printf("%s: %s\n",song[i],name[i]);

   if(n<16)
   {
       for(i=1;i<=16;i++)
       {
           x++;
           printf("%s: %s\n",song[x],name[i]);
           if(x==n)x=0;
       }
   }
   if(n>16)
   {
       for(i=1;i<=n;i++)
       {
           x++;
           printf("%s: %s\n",song[i],name[x]);
           if((x%16)==0)x=0;
          if(x!=0&&i==n)
           {
               i=0;
               flag=1;
           }
         if(x==0&&flag==1)break;

       }
   }

}
