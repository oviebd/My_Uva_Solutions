#include<iostream>
#include<stdlib.h>
#include<stdio.h>
//#include<algorithm.h>
#include<cstring>
using namespace std;

main()
{
    //char te[10];
    int len,array[30],test,i;
    char sentence[210],ch[10];
    gets(ch);
    test=atof(ch);
    //cin>>test;
    for(int k=1;k<=test;k++)

    {

        for(int s=0;s<=25;s++)
        {
            array[s]=0;
        }
    gets(sentence);
       // gets(sentence);
        len=strlen(sentence);

        for(i=0;i<len;i++)
        {
            if(isalpha(sentence[i]))
            {
              sentence[i]=tolower(sentence[i]);
              array[sentence[i]-97]++;
            }
        }

        /*for(int m=0;m<26;m++)
        {
            printf("%c  : %d\t",m+97,array[m]);
        }*/
        int max=0;
        for(i=0;i<26;i++)
        {
            if(max<array[i])max=array[i];
        }
        //cout<<max;
        for(i=0;i<26;i++)
        {
            if(max==array[i])printf("%c",97+i);
        }
        cout<<"\n";
    }
    return 0;
}
