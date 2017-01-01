#include<stdio.h>
main()
{
  unsigned long int num,i,c;
    while(scanf("%lu",&num)==1)
    {
        if(num==0)break;
        c=0;
        for(i=1;i<=num;i++)
        {
            if((num%i)==0)c++;
        }
        if((c%2)==0) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
