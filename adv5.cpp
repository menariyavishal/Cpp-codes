#include<iostream>
using namespace std;

int main(){
    // int l,b;
    // cin>>l>>b;

    // if(l==b){
    //     cout<<"It is a square"<<endl;
    // }
    // else{
    //     cout<<"rectangle"<<endl;
    // }

    // int a,b;
    // cin>>a>>b;

    // if(a>b){
    //     cout<<a<<endl;
    // }
    // else{
    //     cout<<b<<endl;
    // }

    int quantity;
    int itemcost=100;
    cin>>quantity;

    if(quantity*itemcost>=1000){
        cout<<"You will get 10% discout. As your purchesed quantity is worth more than 1000"<<endl;
    }
    else{
        cout<<"Your purchesed quantity is worth less than 1000,so you will not get any discount "<<endl;
    }
    return 0;
}