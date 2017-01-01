#include<iostream>
using namespace std ;

main()

 {
    int a,b,c,d,g,s,i,j,k,n;
    while(cin>>n)
    {
        s=0,g=0;
        if(n==0)break;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                a=i,b=j,c=1;
                while (c!=0)
                {
                    c=b%a;
                    b=a;
                    a=c;

                }
                g=b;
                s=g+s;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
