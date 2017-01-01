#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    char ch[1000000],ov[1000000];
    int i,j,k,c,l,a[10000],b,d;

    while(gets(ch))
    {
        //fflush(stdin);
        c=0,b=0,d=0;
        l=strlen(ch);

        for(i=0;i<=l;i++)
        {
           // fflush(stdin);
            if(ch[i]==' '||ch[i]=='\0')
            {
                d++;
                a[d]=i;
                b++;
                if(b==1)
                {

                for(j=i-1;j>=0;j--)
                {
                    ov[c++]=ch[j];
                }
                if(ch[i]==' ') ov[c++]=ch[i];
                }
                else
                {
                    for(j=i-1;j>a[d-1];j--)
                    {
                        ov[c++]=ch[j];
                    }
                    if(ch[i]==' ')ov[c++]=ch[i];
                }
//fflush(stdin);


                }

        } //fflush(stdin);

        //puts(ov);
        for(i=0;i<l;i++)
        {
            printf("%c",ov[i]);
        }
        printf("\n");
        //fflush(stdin);
}
        return 0;
    }

