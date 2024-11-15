#include<iostream>
using namespace std;
    struct books
    {
        int num;
        char favBook;
        int mostReading;
    };

    union paymentMethod
    {
        int cash;
        char RS;
        int grains;
        char name;
    };
    
    
int main(){
    // struct books k;
    // k.num = 6;
    // k.favBook='m';
    // k.mostReading=3;
    // cout<<k.num<<endl;
    // cout<<k.favBook<<endl;
    // cout<<k.mostReading<<endl;

    // union paymentMethod in;
    // in.cash= 1000;
    //  cout<<in.cash<<endl;
    // in.grains= 6;
    // cout<<in.grains<<endl;
    // in.name ='w';
    // cout<<in.name<<endl;
    // in.RS ='a';
    // // cout<<in.RS<<endl;
    
    // enum learning {codingcourse, Animation, sanskrit, practiceofit } ;
    // cout<<"the serial number are from up to down"<<codingcourse<<endl;
    // cout<<"the serial number are from up to down"<<Animation;
    // cout<<"the serial number are from up to down"<<sanskrit<<endl;
    // cout<<"the serial number are from up to down"<<practiceofit<<endl;
    
    return 0;
}