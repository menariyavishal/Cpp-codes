#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    // bool flag=0;
    
    // for(int i=2;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<"not prime number"<<endl;
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"prime number"<<endl;
    // }

    // int n;
    // cin>>n;
    // int reverse=0;

    // while(n>0){
    //     int lastdigit =n%10;
    //     reverse = reverse*10 + lastdigit;
    //     n = n/10;

    // }

    // cout<<reverse;


    int n;
    cin>>n;

    int sum=0;
    int orign = n;

    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }

   if (orign==sum){
    cout<<"arm"<<endl; 
   }
    else{
        cout<<"not arm"<<endl;
    }
    return 0;
}