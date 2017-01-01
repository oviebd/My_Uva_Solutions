#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>

using namespace std;

main()
{

    char in[100],score[100],final[100];
    int i, count,sum,a,b,c,sum1,sum2,sum3,l,counter;

    while(gets(in))

          {
              if(strcmp("Game Over",in)==0)break;

              l=strlen(in);
              sum1=sum2=sum3=sum=a=b=c=0;
              count=counter=0;


             for(i=0;i<l;i++)
             {
                 if(in[i]!=' ')
                 {
                     score[count]=in[i];
                     count++;
                 }
             }

             score[count]='\0';

// ************** add all score ££££££££££££££££

            for(i=0;i<count;i++)
            {
                a=0;

                if(score[i]=='X')
                {
                    a=10;
                }

                else if(score[i]=='/')
                 {
                     a=10-(score[i-1]-'0');

                 }

                 else
                 {
                     a=score[i]-'0';
                 }

                 sum1=sum1+a;

            }
            //cout<<"sum 1 :";

           // cout<<sum1<<endl;


            //********************** size korlam X eitare by ss********

            for(i=0;i<count;i++)
            {
                if(score[i]=='X')
                {
                    final[counter]='s';
                    counter++;
                    final[counter]='s';
                }
                else final[counter]=score[i];

                counter++;
            }

            final[counter]='\0';

            sum2=sum=0;

           // cout<<final<<endl;

            //*************************************************8

            //***********calculate X's bonus score ************


            for(i=0;i<20 ;i++)
            {
                a=b=c=sum2=0;

                int x=i;


                if(final[i]=='s'&&i<18)
                {
                   // i=i+1;
                   a=b=0;

                     if((final[i+2]=='s'&&final[i+4]=='s'))

                     {
                          a=10;
                          b=10;
                          //i=i+1;
                     }

                     if(final[i+2]=='s'&&(final[i+4]>='0'&&final[i+4]<='9'))
                     {
                         a=10;
                         b=final[i+4]-'0';
                        // i=i+1;
                     }
                    if((final[i+2]>='0'&&final[i+2]<='9')&&final[i+3]=='/')
                     {
                         a=5;
                         b=5;
                     }

                    if ((final[i+2]>='0'&&final[i+2]<='9')&&(final[i+3]>='0'&&final[i+3]<='9'))
                     {

                        // cout<<"entered : here .... "<<endl;

                         int m=final[i+2]-'0';
                         int n=final[i+3]-'0';
                         a=m;
                         b=n;

                        // cout<<"a : "<<m<<"  B : "<<n<<endl;
                     }

                     x=x+1;




                     //cout<<"X s bonus : "<<a+b<<"  i= "<<i<<endl;

                }



    //*************************************************8


 //***********calculate /'s bonus score ************


                 else

                 {
                     c=0;
                     if (final[i]=='/'&&i<19)
                {
                    if(final[i+1]=='s')
                    {
                        //i=i+1;
                        c=10;
                    }

                    else
                    {
                        c=final[i+1]-'0';
                    }

                   // cout<<"/ s bonus : "<<c<<"  i ="<<i<<endl;
                }
                 }

                sum2=a+b+c;

                sum=sum2+sum;
                a=b=c=sum2=0;

                i=x;
               // cout<<" bonus  sum : "<<sum<<endl;


            }

    //*************************************************8


  //  cout<<" final bonus  sum : "<<sum<<endl;

    sum=sum+sum1;





           //cout<<"Final sum : "<<sum<<endl;
           cout<<sum<<endl;


             }


             return 0;


}



/*

Inputs :

101X1/
10X1/X1/

1 0 1 /2 2 X 3 3 X 1/ 3 / X 1 2

1 0 1/2 2X33X1/3/1/X80

1 0 1/2 2X33X1/3/1/8/9


3/ 44 8/ 92 7/ XX 2/ 9/ X 4/

1/ X 1/X 1/X1/X1/X2/0

1/ 3/ 5/ XXX 3/ 5/ 1 2 8/2


*/
