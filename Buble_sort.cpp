#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter value"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x =1;
    while(x<n)
    {
        for(int i =0;i<n-x;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int tmp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
        }
        x++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}