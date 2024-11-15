#include<iostream>
#include<cmath>
using namespace std;

int octalToDeci(int n)
{
    int ans=0;
    int x =1;

    while(n>0)
    {
        int lastdigit = n%10;
        ans +=lastdigit * x;
       x *=8;
        n /= 10;
    }
    return ans;


}

int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    cout<<octalToDeci(n)<<endl;

    return 0;
}