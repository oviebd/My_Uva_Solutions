#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

main()
{
    string str[10];

    int array[4][4],move[7],i,j,sum,n;
    bool test=true;
    str[0]="BCG";
    str[1]="BGC";
    str[2]="CBG";
    str[3]="CGB";
    str[4]="GBC";
    str[5]="GCB";
   // cout<<str[1]<<endl;

    while(test)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {

              // n= cin>>array[i][j];
              n=scanf("%d",&array[i][j]);

              if(n==EOF)
              {
                  test=false;
                  break;
              }

                sum=sum+array[i][j];
            }
            if(test==false)break;
        }

         if(test==false)break;

       // cout<<sum<<endl;

        move[0]=sum-(array[0][0]+array[1][2]+array[2][1]);
        move[1]=sum-(array[0][0]+array[1][1]+array[2][2]);
        move[2]=sum-(array[0][2]+array[1][0]+array[2][1]);
        move[3]=sum-(array[0][2]+array[1][1]+array[2][0]);
        move[4]=sum-(array[0][1]+array[1][0]+array[2][2]);
        move[5]=sum-(array[0][1]+array[1][2]+array[2][0]);

       int min=move[0];

        for(i=0;i<6;i++)
        {
            if(move[i]<min)
            {
                min=move[i];
               // break;
            }
           // cout<<str[i]<<" : " <<move[i]<<endl;
          // cout<<min;
        }

        for(i=0;i<6;i++)
        {
            if(move[i]==min)
            {
                cout<<str[i];
                printf(" %d\n",move[i]);
                //cout<<move[i]<<endl;
                break;
            }
        }


    }

    return 0;
}

// Explaation ::

/*

There three bin(in prblem)
1.  first three integer represent the number of brown ,Green and clean glass in bin1
2.  second three integer represent the number of brown ,Green and clean glass in bin2
3.  third three integer represent the number of brown ,Green and clean glass in bin3

Now our task , minimum move to same colored glass in one bin.

We discuss only one case: 1 2 3 4 5 6 7 8 9
Bin1 : 1+2+3=6; Bin2: 4+5+6=15 Bin3: 7+8+9=24 [note: total=45]
You have to calculate below sequence [it is must, because more minimum combination will find. So combination of color glass in Bin: BCG,BGC,CBG,CGB,GBC,GCB]

1.If we want to take brown glass in bin1, clean in bin2 & green in bin3[BCG]
Bin1: We have to move 3 clean & 2 green glass from bin1; so move=2+3=5
Bin2: We have to move 4 brown & 5 green glass from bin2 ;so move=4+5=9
Bin3: We have to move 7 brown & 9 clean glass from bin3 ; so move=7+9=16
Total move=5+9+16=30  [note: 45-1-6-8=30]

2.If we want to take brown glass in bin1, green in bin2 & clean in bin3[BGC]
Bin1: We have to move 3 clean & 2 green glass from bin1; so move=2+3=5
Bin2: We have to move 4 brown & 6 clean glass from bin2 ;so move=4+6=10
Bin3: We have to move 7 brown & 8 green glass from bin3 ; so move=7+8=15
Total move=5+10+15=30  [note: 45-1-5-9=30]

3. CBG: bin1: move=1+2=3, bin2: move=11; bin3: 16 total move: 30 [note…]
4.CGB: bin1: move:3  ,bin2: move=10 ,bin3: move=17 ,total move= 30   [note …]
5.GBC: bin1: move:4  ,bin2: move=11 ,bin3: move=15,total move= 30   [note …]
6.GCB: bin1: move:4  ,bin2: move=9  ,bin3:17 move= ,total move= 30   [note …]

So minimum move =30 for each combination of color glass in the bin
  So Answer: BCG 30 [BCG is alphabetically first]


*/
