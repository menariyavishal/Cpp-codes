// #include<iostream>
// #include<cmath>
// using namespace std;

// //  1.Prime numbers between two numbers

// bool isprime(int num){
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     for(int i=a;i<=b;i++){
//         if(isprime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // 2.Fibnacci sequence
// void fib(int n){
//     int t1 = 0;
//     int t2 = 1;
//     int nextterm;
// for(int i=1; i<=n; i++){
//     cout<<t1<<endl;
//     nextterm = t1+t2;
//     t1 = t2;
//     t2 = nextterm;
// }
// }

// int main(){

// int n;
// cin>>n;
//     fib(n);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int facto(int n){
//     int s1 = 1;

//     for(int i =2;i<=n;i++){
//         s1 = s1 * i;
//     }
//     cout<<"the factorial of "<<n<<" is: ";
//     return s1;
// }
// int main(){
//     int n ;
//     cin>>n;
//     cout<<facto(n)<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// 3.nCr

int fact(int n)
{
    int factro = 1;
    for (int i = 2; i <= n; i++)
    {
        factro *= i;
    }
    return factro;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << "the combination of  " << n << " is: ";
    cout << fact(n) / (fact(r) * fact(n - r));

    return 0;
}