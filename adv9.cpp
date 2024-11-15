// Sorting in Arrays

#include <iostream>
using namespace std;

int main()
{
    // 1 . Selection sort (Find the minimum element in unsorted array and swap it with element at begining)

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[i]){
    //             int tmp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = tmp;
    //         }
    //     }

    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // 2. Bubble sort (Reapetedly swap two adjacent elements if they are in wrong order)

    //     int counter =1;

    //     while(counter<n ){
    //         for(int i=0;i<n-counter;i++){
    //             if (arr[i]>arr[i+1]){
    //                 int tmp = arr[i];
    //                 arr[i] = arr[i+1];
    //                 arr[i+1] = tmp;
    //             }
    //         }
    //         counter++;
    //     }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // 3.Insertion Sort (Insert an element from unsorted array to its correct position in the soterd array)

    // for (int i = 1; i < n; i++)
    // {
    //     int current = arr[i];
    //     int j = i - 1;
    //     while (arr[j] > current && j >= 0)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = current;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    

    return 0;
}
