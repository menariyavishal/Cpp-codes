#include<iostream>
using namespace std;
      // Reciursions
//  int permu(int n){
//     if(n<2){
//         return 1;
//     }
//     return n *permu(n-1);
   
//  }

//   int base(int r ){
//    if (r<=1){

//   return 1;
//  }
        
//    return 1/base(r-1);
//     }

//  Function overloading

float ask(float a, int b){
  cout<<"thr sum of two numbers "<<endl;
  return a+b;
}
float ask(float a, int b, double c){
  cout<<"thr product and sum of 3 numbers "<<endl;
  return a*b+c;
}
float ask(float a, int b, double c, bool d){
  cout<<"thr product, diff and sum of 4 numbers "<<endl;
  return a*b-c+d;
}

int main(){
  //  cout<<permu(5)<<endl;
  //  cout<<base(5)<<endl;/
  int b;
  float a;
  double c;
  bool d;
  cout<<"enter the num "<<endl;
  cin>>a>>b;
  cout<<ask(a,b);
  cout<<"enter the num "<<endl;
  cin>>a>>b>>c;
  cout<<ask(a,b,c);
  cout<<"enter the num "<<endl;
  cin>>a>>b>>c>>d;
  cout<<ask(a,b,c,d);
  
    return 0;
}