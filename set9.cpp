#include<iostream>
using namespace std;

    int damru (int a, int b, int d){
        cout<<"the product of damru is "<<endl;
        int c =a*b*d;
        return c;
    }

    void flip (int a, int b, int d){
        int jadu= a;
        a=d;
        d=b;
        b=jadu;

    }
    void flipCase (int *a, int *b, int* d){
        int jadu= *a;
       * a=*d;
       * d=*b;
       * b=jadu;

    }
    void flipCasePro (int &a, int &b, int &d){
        int jadu= a;
        a=d;
        d=b;
        b=jadu;

    }

int main(){
    int x=3, y=4, z=6;
    // cout<<"Enter the value "<<endl;
    // cin>>x>>y>>z;
    // flip(x,y,z);

     cout<<"the value of x is "<<x<<"the value of y is "<<y<<"the value of z is "<<z<<endl;
    flipCase(&x,&y,&z); //call by reference by using pointers
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<"the value of z is "<<z<<endl;
  
cout<<endl;
     cout<<"the value of x is "<<x<<"the value of y is "<<y<<"the value of z is "<<z<<endl;
    flipCasePro(x,y,z); //call by reference by using reference variables
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<"the value of z is "<<z<<endl;
    return 0;
}