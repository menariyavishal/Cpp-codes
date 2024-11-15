#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum +=a[j];
            cout<<sum<<" ";
        }
    }

    return 0;
}

/*
    Subarrys :
        Its a continuos part of an array 
    No of subarrys :
        Formula: nC2 +n;
*/