#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

main()
{
    int size,column,row,col_wrong,row_wrong,i,j,test,matrix[200][200],index_row,index_col;
    while(cin>>size)
    {
        if(size==0)break;
        col_wrong=0;
        row_wrong=0;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                cin>>matrix[i][j];
            }
        }
        for(i=0;i<size;i++)
        {
            column=0;
            for(j=0;j<size;j++)
            {
                column=column+matrix[j][i];
            }

           // cout<<"COLUMN = "<<column<<endl;
            if((column%2)==1)
            {
                col_wrong++;
                if(col_wrong<2)index_col=i+1;
                if(col_wrong==2)break;
             // else index_col=i+1;
            }
        }
        //cout<<"Colum index : "<<index_col<<endl;

        for(i=0;i<size;i++)
        {
            row=0;
            for(j=0;j<size;j++)
            {
                row=row+matrix[i][j];
            }

           // cout<<"ROW= "<<row<<endl;

            if((row%2)==1)
            {
                row_wrong++;
                if(row_wrong<2)index_row=i+1;
                if(row_wrong==2)break;
            //  else  index_row=j+1;
            }
        }

       // cout<<"Row Index : "<<index_row<<endl;

        if(col_wrong==0&&row_wrong==0)cout<<"OK"<<endl;
        else if(col_wrong==1||row_wrong==1)printf("Change bit (%d,%d)\n",index_row,index_col);
        else cout<<"Corrupt"<<endl;

    }

    return 0;
}
