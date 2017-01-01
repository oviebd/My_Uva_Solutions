#include<iostream>
#include<stdio.h>
 using namespace std;

 main()
 {
     long long int a,b,c,d,test;
     cin>>test;
     for(int i=0;i<test;i++)
     {
         cin>>a>>b>>c>>d;
         if(a==b&&b==c&&c==d)cout<<"square"<<endl;
         else if( (a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c) )cout<<"rectangle"<<endl;
         else if( (a<=b+c+d) && (b<=a+c+d) && (c<=a+b+d) && (d<=a+b+c) ) cout<<"quadrangle"<<endl;
         else cout<<"banana"<<endl;
     }
     return 0;

 }
