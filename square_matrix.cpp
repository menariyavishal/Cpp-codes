#include<iostream>

using namespace std;

int main()
{

   int n;
   cout<<"enter"<<endl;
   cin>>n;

   int arr[n][n];

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
   }

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

   //Sum diagonal wise

   int sum=0;
//    for(int i=0;i<n;i++)
//    {
//     sum+=arr[i][i];
//    }
//    cout<<sum;

   //sum diagonal wise from left to right

   int x=n,y=n-2;

    for(int i=0;i<n;i++)
    {
        sum+=arr[n-x][n-y];
        x--;
        y++;
    }
    cout<<sum;


    




    return 0;
}