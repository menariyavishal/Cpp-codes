#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter n and m"<<endl;
    cin>>n>>m;

    int arr[n][m];

    //Row wise input
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


    //to print sum Row wise

    for(int row=0;row<n;row++)
    {
        int sum =0;
        for(int col=0;col<m;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum;
        cout<<endl;
    }

   
   

    /*
    //Clomuns wise input
    for(int col=0;col<m;col++)
    {
        for(int row=0;row<n;row++)
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

    */

   






    return 0;
}