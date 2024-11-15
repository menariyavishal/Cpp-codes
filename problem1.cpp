#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx = INT_MIN;
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
        mx = max(mx,a[i]);
        cout<<mx<<" ";
    }

    return 0;
}