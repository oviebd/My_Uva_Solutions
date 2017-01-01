#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<cstdlib>
using namespace std;

main()
{
   char number[40] ;
  long int decimal,hexa;
   while(1)
   {
       gets(number);
       //if(number[0]<0)break;
       if(number[0]=='0'&&number[1]=='x')
       {
           int b=atoi(number);
           decimal=strtol(number,NULL,16);
           cout<<decimal<<endl;
          // printf("%d\n",b);
       }
       else
       {
         // hexa=strtol(number,NULL,10);
           int a=atoi(number);
           if(a<0)break;
          printf("0x%X\n",a);
       }
   }
   return 0;
}
