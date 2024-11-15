#include<iostream>
using namespace std;

int fact(int n)
{
    int factorail =1;
    for(int i =1;i<=n;i++)
    {
        factorail *=i;
    }
    return factorail;
}

int main()
{
    int n;
    cout<<"Enter value of n\n";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}