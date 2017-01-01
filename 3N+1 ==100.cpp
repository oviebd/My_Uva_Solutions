
#include<stdio.h>
main()
{
int a,b,c,n,x,y,i,j,m,k[10005];
  while (scanf("%d%d",&a,&b)==2)
  {
      m=1;
   if(a>b)
   {
       y=a;
       x=b;
    }
    else
    {
        y=b;
        x=a;
        }
        for(i=x;i<=y;i++)
        {
            n=i;
            c=1;  /*first input is countable so c=1 not c=0*/
        while(n!=1)
            {
                //if(n==1)break;
                if((n%2)==0)n=n/2;
                else n=3*n+1;
                c++;
                //if(i==1)break;
               // printf("%lu\t",n);
                }

               // k[i]=c;
               // printf("\n%d\n",k[i]);
               if(c>m)m=c;
        }
       /* m=1;
for(i=x;i<=y;i++)
{
    if(k[i]>m)m=k[i];
}*/
printf("%d %d %d\n",a,b,m);
}
return 0;
}
