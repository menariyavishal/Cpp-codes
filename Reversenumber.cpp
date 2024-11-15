#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int rerverse=0;

    while(n>0)
    {
        int lstdigit = n%10;

        rerverse = rerverse*10 + lstdigit;
        n = n/10;
    }
    cout<<rerverse<<endl;

    return 0;
}