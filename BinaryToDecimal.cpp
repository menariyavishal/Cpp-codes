#include<iostream>
#include<cmath>
using namespace std;

int binaryToDeci(int n)
{
    int ans=0;
    int mltplyr =1;

    while(n>0)
    {
        int lastdigit = n%10;
        ans +=lastdigit * mltplyr;
        mltplyr *=2;
        n /= 10;
    }
    return ans;


}

int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    cout<<binaryToDeci(n)<<endl;

    return 0;
}