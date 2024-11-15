#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 69;
    int *p = &a;
    int **q =&p;

    cout<<*q<<endl;  // One time derefrencing will give address of p as q is pointed towards p
    cout<<**q<<endl;    // Two times derefrencing will give value of a as it is pointed towards p but p is pointed towards a

    // we can dereference as many time as we want to




    return 0;
}