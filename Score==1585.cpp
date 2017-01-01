#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

main(){

    int l,test,c,count,n;
    char ch[110],in[10];
    cin>>n;
   //n=atoi(in);
    //cout<<n<<endl;

    for(int t=1;t<=n;t++){

        cin>>ch;
        l=strlen(ch);
        c=0;
       int sum=0;
        for(int i=0;i<l;i++)
        {
            if(ch[i]=='O'){
                c++;
                sum=sum+c;
            }else{

                c=0;
            }
        }

        cout<<sum<<endl;
    }

}
