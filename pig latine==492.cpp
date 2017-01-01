#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


main()
{
    char ch,pos;
   //while(cin>>ch)
  // while((cin>>ch),ch==1)
   while(scanf("%c", &ch)==1)
    {
        if(isalpha(ch))
        {
            if(ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' ||ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
            {
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch=getchar();
                }
                cout<<"ay";
                //putchar(ch);
            }

            else
            {
                pos=ch;
                ch=getchar();
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch=getchar();
                }
                cout<<pos<<"ay";
               // putchar(ch);
            }
           // putchar(ch);
        }
        putchar(ch);
    }

    return 0;
}
