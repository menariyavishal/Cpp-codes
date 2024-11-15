#include <iostream>
using namespace std;

int main()
{
  // maximum numbers
  //  int a,b, c;
  //  cin>>a>>b>>c;

  // if(a>b){
  //     if(a>c){
  //         cout<<a<<endl;
  //     }
  //     else{
  //         cout<<c<<endl;
  //     }
  // }
  // else{
  //     if(b>c){
  //         cout<<b<<endl;
  //     }
  //     else{
  //         cout<<c<<endl;
  //     }
  // }

  //********** odd or even********

  // int n;
  // cin>>n;
  // if (n%2==0){ //  (%) this is the module operator works as to find remainder
  //     cout<<"even number "<<endl;
  // }
  // else{
  //     cout<<"odd number "<<endl;
  // }

  // *********// for loop in C++*******

  // int s;
  // cin>>s;
  // int sum =0;
  // //  int static sum;
  // for (int i = 1; i <=s; i++)
  // {
  //    sum=sum+i;
  // }
  // cout<<sum<<endl;

  // **********while loop in C++*********
  /* (in the while loop number of alteration are not important
    the whole loop is executed on the basis of condition until the condition is true)*/

  // int n;
  // cin>>n;
  //  while(n>0){
  //     cout<<n<<endl;
  //     cin>>n;
  //  }

  /*  (do while loop in C++)  */
  /* in the do while loop first we execute the body of the loop then
      we check the conditon (minimum the body will execute for one time)*/
  // int n;
  //  cin>>n;
  // int i =2;
  //   do
  //   {
  //    if(n%2==0){
  //     cout<<n/i<<endl;

  //    }

  //   } while (n/2<0);

  // ****Breaks and continues****
  // int pocetmoney = 5000;
  // for (int i = 1; i <= 30; i++)
  // {

  //   if (i % 2 == 0)
  //   {
  //     continue;
  //   }
  //     cout << "Go out today " << endl;
  //   if (pocetmoney == 0)
  //   {
  //     pocetmoney=pocetmoney-500;
  //     break;

  //   }
  // }

  // for (int i = 0; i <=100; i++)
  // {
  //   if((i%3==0) || (i%2==0)){
  //     continue;
  //   }
  //   cout<<i<<endl;
  // }

  // int n;
  // cin>>n;
  // int i;
  // for ( i =2 ; i < n; i++)
  // {
  //   if(n%i==0){
  //     cout<<"it is a non prime number "<<endl;
  //     break;
  //   }
  // }

  // if(i==n){
  //   cout<<"it is a prime number "<<endl;
  // }

  // int a,b;
  // cin>>a>>b;
  // for(int num=a; num<=b;num++){
  //   int i;
  //   for(i=2; i<num; i++){
  //     if(num%i==0){
  //       break;
  //     }
  //   }
  //   if(i==num){
  //     cout<<num<<endl;
  //   }
  // }

  //  ****Switch case ****

  // float a,b;
  // cout<<"enter the numbers "<<endl;
  // cin>>a>>b;

  // char sign;
  // cout<<"chhose a sign to operate "<<endl;
  // cin>>sign;

  // switch (sign)
  // {
  // case '+':
  //   cout<<a+b;
  //   break;
  // case '-':
  //   cout<<a-b;
  //   break;
  // case '*':
  //   cout<<a*b;
  //   break;
  // case '/':
  //   cout<<a/b;
  //   break;

  // default:
  // cout<<"enter another operator :";
  //   break;
  // }

  return 0;
}