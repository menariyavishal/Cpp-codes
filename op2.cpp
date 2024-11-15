#include<iostream>
#include<string>
using namespace std;

class byaj{
    int a;
    float b;
    string n;

    public:
    void mul();
    void rate ();
    void retrun ();
    // void compound ();

   
};

void byaj :: mul(){
    cout<<"Enter the amount of Mul-rashi"<<endl;
    cin>>a;

}

void byaj ::rate(){
    cout<<"The intrest rate is RS- per RS-100 "<<endl;
    cin>>b;
      
}

void byaj :: retrun () {
    int c = (a/100);
    cout<<c<<endl;
    
    int d =(b*c);
    cout<<"Byaj of one month is "<<d<<endl;

    int year = d*12;
    cout<<"Byaj of one year is "<<year<<endl;
    
    

}

// void byaj ::compound(){
//     cout<<"If you did not pay the Byaj in one year then ";
//     int e = (a + year);
// }

int main(){
    byaj o1,o2;
    o1.mul();
    o1.rate();
    o1.retrun();

    o2.mul();
    o2.rate();
    o2.retrun();

    
    return 0;
}