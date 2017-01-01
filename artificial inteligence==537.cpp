#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

main()
{
    int i,j,k,l,test,p,u,I,p_p,countp,countu,counti,p_u,p_i;
    char t[10],ch[1500],s_p[10],s_u[10],s_i[10];
    float v_u,v_i,v_p;

    gets(t);
    test=atoi(t);
    //cout<<test;
    for(int k=1;k<=test;k++)
    {
        gets(ch);
        l=strlen(ch);
        p=0,I=0,u=0,countp=0,counti=0,countu=0;
        for(i=0;i<l;i++)
        {
            if(ch[i]=='P'&&ch[i+1]=='=')
            {
                p=1;
                p_p=i+2;
            }

            if(ch[i]=='U'&&ch[i+1]=='=')
            {
                u=1;
                p_u=i+2;
            }

            if(ch[i]=='I'&&ch[i+1]=='=')
            {
                I=1;
                p_i=i+2;
            }
        }

        if(p)
        {
            for(i=p_p;i<l;i++)
            {
                if((ch[i]>='0'&&ch[i]<='9')||(ch[i]=='.'))
                {
                    s_p[countp]=ch[i];
                    countp++;
                }
                else break;
            }
            s_p[countp]='\0';
            v_p=atof(s_p);
            //cout<<countp<<endl;
           // cout<<"p=="<<v_p<<endl;
            if(ch[countp+p_p]=='m')v_p=v_p*pow(10,-3);
            if(ch[countp+p_p]=='k')v_p=v_p*pow(10,3);
            if(ch[countp+p_p]=='M')v_p=v_p*1000000;      //  1 M ( Mega ) =106^6 or 1 000 000
            //cout<<"p=="<<v_p<<endl;
        }

        if(u)
        {
            for(i=p_u;i<l;i++)
            {
                if((ch[i]>='0'&&ch[i]<='9')||(ch[i]=='.'))
                {
                    s_u[countu]=ch[i];
                    countu++;
                }
                else break;
            }
            s_u[countu]='\0';
            v_u=atof(s_u);
            //cout<<"U=="<<v_u<<endl;
            if(ch[countu+p_u]=='m')v_u=v_u*pow(10,-3);
            if(ch[countu+p_u]=='k')v_u=v_u*pow(10,3);
            if(ch[countu+p_u]=='M')v_u=v_u*1000000;
            //cout<<"U=="<<v_u<<endl;
        }

        if(I)
        {
            for(i=p_i;i<l;i++)
            {
                if((ch[i]>='0'&&ch[i]<='9')||(ch[i]=='.'))
                {
                    s_i[counti]=ch[i];
                    counti++;
                }
                else break;
            }
            s_i[counti]='\0';
            v_i=atof(s_i);
            //cout<<"I=="<<v_i<<endl;
            if(ch[counti+p_i]=='m')v_i=v_i*pow(10,-3);
            if(ch[counti+p_i]=='k')v_i=v_i*pow(10,3);
            if(ch[counti+p_i]=='M')v_i=v_i*1000000;
           // cout<<"I=="<<v_i<<endl;
           // v_i=atof(s_i);
        }
        printf("Problem #%d\n",k);

        if(u&&I)
        {
            float resultp=v_u*v_i;
            printf("P=%.02fW\n",resultp);
        }
        if(p&&u)
        {
            float resulti=v_p/v_u;
            printf("I=%.02fA\n",resulti);

        }

        if(p&&I)
        {
            float resultu=v_p/v_i;
            printf("U=%.02fV\n",resultu);
        }
        cout<<endl;

       //float resu=v_p/v_i;
      // cout<<resu<<endl;
       //printf("%f\n",resu);

    }

    return 0;
}
