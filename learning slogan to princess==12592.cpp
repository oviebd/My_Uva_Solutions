#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
using namespace std;

main()
{
    int test,n,i,j;
    char input[200],slogan01[200][200],slogan02[200][200],t[10],num[10];
    gets(num);
    n=atoi(num);
    for(i=0;i<n;i++)
    {
        gets(slogan01[i]);
        gets(slogan02[i]);
    }

    gets(t);
    test=atoi(t);
    while(test--)
    {
        gets(input);
        for(i=0;i<n;i++)
        {
            if(strcmp(input,slogan01[i])==0)
            {
                puts(slogan02[i]);
                break;
            }
        }
    }
    return 0;
}
