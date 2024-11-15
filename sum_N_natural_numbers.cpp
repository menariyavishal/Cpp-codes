#include<iostream>
using namespace std;

//sum of first n Natural numbers formula S = (n*(n+1))/2

int sonn(int n)
{
    int sum =0;
    sum = (n*(n+1))/2;
    return sum;

}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<sonn(n)<<endl;
    
    
    return 0;

}