#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int counter =1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}

/*
    Logic of Bubble sort:
        Repetedly swap to  adjacent elements if they are in wrong order
    Benefit:
        We directly get the max element
*/