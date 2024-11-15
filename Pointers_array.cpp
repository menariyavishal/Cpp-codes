#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {11,22,33,44};
    cout<<*arr<<endl;  //Arrays also behave as a pointer

    int *p = arr;

    for(int i=0;i<4;i++)
    {
        // One way to access values of arrays using array pointer
        cout<<*(arr+i)<<endl;           
          // Another way to access values of arrays using another pointer p
          
        // cout<<*p<<endl;
        // p++;  
    }

    return 0;
}