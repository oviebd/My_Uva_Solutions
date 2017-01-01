   #include<stdio.h>
#include<string.h>
main()
{
    int a,i,t,c,l,j;
    char ch[120];
    scanf("%d",&t);
    //fflush(stdin);
    getchar();
    for(j=1;j<=t;j++)
    {
        gets(ch);
        c=0;
        //scanf("%s",&ch);
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w'||ch[i]==' ')c++;
            else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')c=c+2;
            else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')c=c+3;
            else if(ch[i]=='s'||ch[i]=='z')c=c+4;
        }
        printf("Case #%d: %d\n",j,c);
    }
    return 0;
}
