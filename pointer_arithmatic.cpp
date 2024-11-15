#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 29;
    int *aptr = &a;

    cout<<&a<<endl;         // this will give addres of a
    cout<<&aptr<<endl;      // this will give address of aptr
    cout<<aptr<<endl;       // this will give address of a as aptr is pointed towards a
    cout<<*aptr<<endl;      // this will give value stored in a  *aptr is dereffencing of pointer

    return 0;

}