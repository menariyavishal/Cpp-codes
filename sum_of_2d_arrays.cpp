#include<iostream>

using namespace std;

int main()
{

    int n,m;
    cout<<"Enter Order of matrix"<<endl;
    cin>>n>>m;

    int arr[n][m];

    //printing row wise

    for(int row=0;row<n;row++)
    {
    for(int col=0;col<m;col++)
        {
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;

    }

    //Sum row wise
    for(int col=0;col<m;col++)
    {
        int sum =0;
    for(int row=0;row<n;row++)
        {
            sum+=arr[row][col];
        }
        cout<<sum;
        cout<<endl;

    }




    return 0;
}