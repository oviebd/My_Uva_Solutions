#include<stdio.h>
#include<math.h>
main()
{
  double u,v,t,a,s,b;
  int count=0,n;
  while(scanf("%d",&n)==1)
  {
      count++;
      if(n==0)break;
      if(n==1)
      {
          scanf("%lf %lf %lf",&u,&v,&t);
          a=(v-u)/t;
          s=u*t+0.50*(a*t*t);
          printf("Case %d: %.3lf %.3lf\n",count,s,a);
      }
      if(n==2)
      {
          scanf("%lf %lf %lf",&u,&v,&a);
          t=(v-u)/a;
          s=u*t+0.50*(a*t*t);
          printf("Case %d: %.3lf %.3lf\n",count,s,t);
      }
      if(n==3)
      {
          scanf("%lf %lf %lf",&u,&a,&s);
          b=u*u+2.0*a*s;
          v=sqrt(b);
          t=(v-u)/a;
          printf("Case %d: %.3lf %.3lf\n",count,v,t);
      }
      if(n==4)
      {
          scanf("%lf %lf %lf",&v,&a,&s);
          b=v*v-2.0*a*s;
          u=sqrt(b);
          t=(v-u)/a;
          printf("Case %d: %.3lf %.3lf\n",count ,u,t);


      }
  }
  return 0;
}
