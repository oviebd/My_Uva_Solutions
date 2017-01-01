#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#define size 125
#define si 900000

using namespace std;

main()
{
    int a[size],m,i,j;
    char input[si];
    for(i=0;i<125;i++)a[i]=0;

    while(gets(input))
    {
        //puts(input);
        int l=strlen(input);
        m=0;

        for(i=65;i<125;i++)a[i]=0;

        for(i=0;i<l;i++)  if(isalpha(input[i])) a[input[i]]++;

        for(i=0;i<125;i++)  if(m<a[i])m=a[i];

        for(i=0;i<125;i++)  if(m==a[i])printf("%c",i);

        printf(" %d",m);
        cout<<endl;
    }

    return 0;
}
