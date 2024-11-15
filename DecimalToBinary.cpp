#include<bits/stdc++.h>
using namespace std;

//NOT COMPLETED YET!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int deciToBinary(int n)
{
    int ans=0;
    int x=1;

    while(x<=n)
    {
        x *=2;
        x/=2;
    }

}

int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    cout<<deciToBinary(n)<<endl;

    return 0;
}