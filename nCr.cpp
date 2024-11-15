#include<iostream>
using namespace std;

int fact(int n)
{
    int factorail =1;
    for(int i=2;i<=n;i++)
    {
        factorail *= i;

    }
    return factorail;
}

int main()
{
    int n,r;
    cout<<"Enter values of n and r\n";
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}