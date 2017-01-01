#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

main()
{
    char ch[3000];
    int i,l,j,a;
    gets(ch);
    l=strlen(ch);

    for(i=0;i<l;i++)
    {
        if(ch[i]==']'||ch[i]=='}')cout<<"p";
      else if(ch[i]=='['||ch[i]=='{')cout<<"o";
       else if(ch[i]=='p'||ch[i]=='P')cout<<"i";
        else  if(ch[i]=='o'||ch[i]=='O')cout<<"u";
         else   if(ch[i]=='i'||ch[i]=='I')cout<<"y";
            else  if(ch[i]=='u'||ch[i]=='U')cout<<"t";
             else if(ch[i]=='y'||ch[i]=='Y')cout<<"r";
       else   if(ch[i]=='t'||ch[i]=='T')cout<<"e";
        else  if(ch[i]=='r'||ch[i]=='R')cout<<"w";
        else  if(ch[i]=='e'||ch[i]=='E')cout<<"q";
        else  if(ch[i]=='\''||ch[i]=='\"')cout<<"l";
       else   if(ch[i]==';'||ch[i]==':')cout<<"k";
        else  if(ch[i]=='l'||ch[i]=='L')cout<<"j";
         else if(ch[i]=='k'||ch[i]=='K')cout<<"h";
        else  if(ch[i]=='j'||ch[i]=='J')cout<<"g";
        else  if(ch[i]=='h'||ch[i]=='H')cout<<"f";
        else if(ch[i]=='g'||ch[i]=='G')cout<<"d";
        else  if(ch[i]=='f'||ch[i]=='F')cout<<"s";
        else  if(ch[i]=='d'||ch[i]=='D')cout<<"a";
        else  if(ch[i]=='/'||ch[i]=='?')cout<<"<";
        else  if(ch[i]=='>'||ch[i]=='.')cout<<"m";
        else  if(ch[i]=='<'||ch[i]==',')cout<<"n";
        else  if(ch[i]=='m'||ch[i]=='M')cout<<"b";
        else if(ch[i]=='n'||ch[i]=='N')cout<<"v";
        else  if(ch[i]=='b'||ch[i]=='B')cout<<"c";
        else  if(ch[i]=='v'||ch[i]=='V')cout<<"x";
        else  if(ch[i]=='c'||ch[i]=='C')cout<<"z";
        else  if(ch[i]=='='||ch[i]=='+')cout<<"0";
        else  if(ch[i]=='-'||ch[i]=='_')cout<<"9";
        else if(ch[i]=='0'||ch[i]==')')cout<<"8";
        else if(ch[i]=='9'||ch[i]=='(')cout<<"7";
        else if(ch[i]=='8'||ch[i]=='*')cout<<"6";
        else if(ch[i]=='7'||ch[i]=='&')cout<<"5";
      else   if(ch[i]=='6'||ch[i]=='^')cout<<"4";
       else  if(ch[i]=='5'||ch[i]=='%')cout<<"3";
       else  if(ch[i]=='4'||ch[i]=='$')cout<<"2";
       else  if(ch[i]=='3'||ch[i]=='#')cout<<"1";
      else   if(ch[i]=='2'||ch[i]=='@')cout<<"`";
    else cout<<ch[i];

    }
    cout<<endl;

    return 0;
}
