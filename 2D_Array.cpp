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

    int val;
    cout<<"Enter value "<<endl;
    cin>>val;
    bool flag = false;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(a[i][j]==val)
           {
            cout<<i<<":"<<j;
            flag = true;
           }
        }
        
    }

    if(flag)
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }



    return 0;
}