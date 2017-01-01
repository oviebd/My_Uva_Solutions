/*You should check only 2 condition
1.once that all the charecter is found break the loop and print win.
2.once the wrong guess is equal to 7 break the loop anp print lose .

if it failed two of this condition then it is chickened out


*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

main()
{
    char choose[1000],correct[1000],temp[1000];
    int i,j,count,test,l1,l2,wrong,c;
    bool flag,flag1;

    while(cin>>test)
    {
        if(test==-1)break;
        cin>>correct;
        cin>>choose;
        l1=strlen(correct);
        l2=strlen(choose);
        count=wrong=c=0;

//**************************************************** Used for take only unique alphabet from choose string
        for(i=0;i<l2;i++)
    {
        if(!i)temp[c]=choose[i];
        else
        {
            flag1=true;
            for(int k=0;k<=c;k++)
            {
                if(choose[i]==temp[k])
                {
                    flag1=false;
                    break;

                }
                else
                {
                    //count++;
                    flag1=true;
                    // temp[count]=ch[i];

                }

            }
            if(flag1==true)
            {
                c++;
                temp[c]=choose[i];
            }
        }
    }

    c++;


    temp[c]='\0';

    //cout<<temp<<endl;

//**********************************************************************
    int l=strlen(temp);



        for(i=0;i<l;i++)
        {
            flag=false;
           // flag1=true;

            //temp[i]=choose[i];

            if(count==l1||wrong==7)break;
            for(j=0;j<l1;j++)
            {
                if(temp[i]==correct[j])
                {
                    count++;
                    flag=true;
                }
            }

            if(flag==false)wrong++;
        }

        printf("Round %d\n",test);

        if(wrong==7)cout<<"You lose."<<endl;
        else if (count==l1)cout<<"You win."<<endl;
        else cout<<"You chickened out."<<endl;
        temp[0]='\0';

    }

    return 0;

}
