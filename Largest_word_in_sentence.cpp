#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;

    int currLEn =0 , maxLen =0;
    int st =0, maxst =0;


    while(1)
    {
        if(arr[i] ==' ' || arr[i] == '\0')
        {
            if(currLEn > maxLen)
            {
                maxLen = currLEn;
                maxst =st;
            }
            currLEn =0;
            st = i+1;
        }
        else
        {
            currLEn++;

        }

        if(arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++)
    {
        cout<<arr[i+maxst];
    }

    return 0;
}