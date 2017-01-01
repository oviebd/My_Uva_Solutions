#include<stdio.h>
#include<algorithm>
using namespace std ;

main()

{
    int t,i,j;
  signed long int a[5],b;
   scanf("%d",&t);
   for(j=1;j<=t;j++)
   {
       for(i=0;i<3;i++)
       {
             scanf("%ld",&a[i]);
       }

   sort(a,a+3);
   //printf("%d\t%d\t%d\n",a[0],a[1],a[2]);
   b=a[0]+a[1];
   if(b<=a[2])printf("Case %d: Invalid\n",j);
   if(b>a[2])
   {
       if(a[0]==a[1]&&a[1]==a[2]&&a[0]==a[2])
       {
            printf("Case %d: Equilateral\n",j);
             continue;
       }

       if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])printf("Case %d: Isosceles\n",j);
      // if(a[0]!=a[1]&&a[1]!=a[2]&&a[0]!=a[2])printf("Case %d: Scalene\n",j);
      else printf("Case %d: Scalene\n",j);
   }

}
return 0;
}
