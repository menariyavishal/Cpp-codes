#include<bits/stdc++.h>
using namespace std;

int linerSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<" Enter size of arry"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    cout<<linerSearch(arr,n,key)<<endl;

    return 0;
}