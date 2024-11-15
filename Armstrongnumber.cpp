#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum = 0;
    int Originaln = n;

    while(n>0)
    {
        int lastdigit = n%10;
        sum += lastdigit*lastdigit*lastdigit;
        n=n/10;
    }

    if(sum==Originaln)
    {
        cout<<"Armstorng number"<<endl;
    }
    else
    {
        cout<<"Not a Armstrong number"<<endl;
    }


    return 0;
}