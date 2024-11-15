#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter rows and columns"<<endl;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    //Spiral order print logic

    int row_strt =0;
    int row_end = n-1;
    int col_strt = 0;
    int col_end =m-1;

    while(row_strt<=row_end && col_strt<=col_end)
    {
        // for row start
        for(int col = col_strt;col<=col_end;col++)
        {
            cout<<a[row_strt][col]<<" ";
        }
        row_strt++;

        // for column end
        
        for(int row = row_strt;row<=row_end;row++)
        {
            cout<<a[row][col_end]<<" ";
        }
        col_end--;
        
        //for row end

        for(int col = col_end;col>=col_strt;col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;

        //for col start

        for(int row = row_end;row>=row_strt;row--)
        {
            cout<<a[row][col_strt]<<" ";
        }
        col_strt++;
    }

    return 0;
}