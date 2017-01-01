#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

main()
{
    char ch[200];
    int count=1;
    while(1)
    {
        gets(ch);
        if(strcmp(ch,"*")==0)break;
       else if(strcmp(ch,"Hajj")==0)printf("Case %d: Hajj-e-Akbar\n",count);
       else printf("Case %d: Hajj-e-Asghar\n",count);
       count++;
    }

    return 0;

}
