#include<stdio.h>
int ov( int n)
{
     int a;
    n=n+11;
    if(n>=101)n=n-10;
    if(n<=100)return (ov(n));
    else return n;
}
int ie( int n)
{
     int a;
    a=n;
    n=n-10;
    printf("f91(%d) = %d\n",a,n);
}
main()
{
    int n,a,b;
  while(scanf("%d",&n)==1)
  {
      a=n;
      if(n==0)break;
    if(n<=100)
    {
        b=(ov(n));
         printf("f91(%d) = %d\n",a,b-10);

    }
if(n>=101)ie(n);
  }
    return 0;
}
