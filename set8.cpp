#include<iostream>
using namespace std;

    // char songs(int a, float r, double b){
    //     return(a+r*b);
    // }

    // FUNCTION PROTOTYPES
    int rationRupees (int,int,int,float);
    void h();

int main(){
    // cout<<"the outcome is "<<songs(3,4,5)<<endl;

    cout<<"money of ration "<<rationRupees(3,6,5,2.5)<<endl;
    h();
    return 0;
}

int rationRupees (int a, int b, int c, float k){
    cout<<"the total  is "<<endl;
    return (a+b*c+k);
}

void h(){
    cout<<"Keep practicing one day you will become a good coder "<<endl;
}