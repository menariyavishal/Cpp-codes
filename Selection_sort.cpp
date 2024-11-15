#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int tmp = arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/*
    Logic of Selection SORT:
    Find minno and swap it with first place of unsorted array

*/