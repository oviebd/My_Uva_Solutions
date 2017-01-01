#include<iostream>
#include<cstdio>

using namespace std;

main()
{
    float h,u,d,f,p_day,flag,r;
    int day;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0.00)break;
        p_day=0.00;
        day=0;
        r=(f/100)*u ;
        for(; ;)
        {
            p_day=u+p_day;
            day++;

           // cout<<"adding p_day : "<<p_day<<endl;

            if(p_day>h)
            {
                flag=1.00;
                break;
            }

            if(p_day<0.00)
            {
                flag=0.00;
                break;
            }



            p_day=p_day-d;

       // cout<<"minus p_day : "<<p_day<<endl;

           if(p_day<0.00)
            {
                flag=0.00;
                break;
            }

            u=u-r;
            if(u<0)u=0;





        }
        if(flag==1)printf("success on day %d\n",day);
        else  printf("failure on day %d\n",day);
    }
}
