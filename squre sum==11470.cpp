#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>

using namespace std;

main()
{
    int arr[12][12],s,test=0,sum,r_array[8],a,b,i,j,c;
    int m,n,add;
    while(cin>>s)
    {
        if(s==0)break;
        test++;
        a=0,m=0,n=1,c=0;
        b=s*s;
        for(i=0;i<s;i++)
        {
            for(j=0;j<s;j++)
            {
                cin>>arr[i][j];
            }
        }
      //  cout<<endl;

        while(a<b)
        {
            add=0;
            for(i=0+m;i<s-m;i++)
            {
                add=arr[m][i]+add;
               // cout<<arr[m][i]<<" ";
                a++;
            }
            if(a>=b)
            {
                r_array[c]=add;
                c++;
                break;
            }

            for(j=m;j<s-m;j++)
            {
                i=s-1-m;
                add=add+arr[i][j];
                // cout<<arr[i][j]<<" ";
                a++;
            }

            if(a>=b)
            {
                r_array[c]=add;
                c++;
                break;
            }

            for(i=n;i<s-1-m;i++)
            {
                add=add+arr[i][m];
              //   cout<<arr[i][m]<<" ";
                a++;
            }
            if(a>=b)
            {
                r_array[c]=add;
                c++;
                break;
            }

            for(i=n;i<s-1-m;i++)
            {
                add=add+arr[i][s-n];
               //  cout<<arr[i][s-n]<<" ";
                a++;
            }
            if(a>=b)
            {
                r_array[c]=add;
                c++;
                break;
            }

            r_array[c]=add;
            c++;
            m++;
            n++;
          //  cout<<endl<<endl;

        }

        printf("Case %d: ",test);
        for(i=0;i<c;i++)
        {
          if(i!=c-1)  printf("%d ",r_array[i]);
          if(i==c-1)  printf("%d",r_array[i]);
        }
        cout<<endl;


    }
}
