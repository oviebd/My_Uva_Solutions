#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

main()
{
    char li[10],ch[1000][1000],c;
    int line,i,j,k,l[1000],array[150],ovie[200];
    bool ar[200];
    for(i=0;i<150;i++)
    {
        array[i]=0;
        //ar[i]=true;
    }
    gets(li);
    line=atoi(li);
   // cout<<line;
    for(i=0;i<line;i++)
    {
        gets(ch[i]);
    }

    for(i=0;i<line;i++)
    {
        l[i]=strlen(ch[i]);
    }


    for(j=0;j<line;j++)
    {
        for(i=0;i<l[j];i++)
        {
            if(isalpha(ch[j][i]))
            {
                c=toupper(ch[j][i]);
                array[c-64]++;
            }
        }
    }


    for(i=0;i<26;i++)
    {
        ovie[i]=array[i];
    }


      /*for(i=1;i<=26;i++)
    {
        if(array[i])    printf("%c : %d \t",64+i,array[i]);
    }*/

    sort (array,array+26);
    //int m=0;

    for(j=25;j>=0;j--)
    {
        for(i=0;i<26;i++)
        {
           if(!array[j])break;

            if (array[j]==ovie[i]&&ar[i]!=true)
            {
                printf("%c %d\n",i+64,array[j]);
               ar[i]=true;
                // m=i;
                break;
            }
        }
    }

    /*for(i=1;i<=26;i++)
    {
        if(array[i])    printf("%c : %d \n",64+i,array[i]);
    }*/
    return 0;

}
