#include<iostream>
using namespace std;

//  inline int add(int a, int b,float c){
//     int d= a+b*c;
//     return d;
// }
        // default argumentd
 int babu (int x ,int y , float v=6.022){
    return x+y+v;
    cout<<"Here is result "<<endl;
     }

int main(){
    // cout<<"the outcome of 4, 5 and 3.14 is "<<add(4,5,3.14)<<endl;
  cout<<"the sum of "<<babu(6,4)<<endl;
}