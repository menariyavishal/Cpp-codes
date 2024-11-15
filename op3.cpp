// #include<iostream>
// using namespace std;

//     // class employee{
//     //     private :
//     //     int a,b,c;

//     //     public:
//     //     int d,e;

//     //     void setdata(int ,int , int);
//     //     void print (){
//     //         cout<<" the value of a is "<<a<<endl;
//     //         cout<<" the value of b is "<<b<<endl;
//     //         cout<<" the value of c is "<<c<<endl;
//     //         cout<<" the value of d is "<<d<<endl;
//     //         cout<<" the value of e is "<<e<<endl;
//     //     }
//     // };

//     // void employee :: setdata(int a1,int a2, int a3){
//     //     a = a1 + a2 + a3;
//     //     b = (a1 + a2) - a3;
//     //     c = (a1*a2) + a3;
//     // }
// int main(){
//     // employee e1;
//     // e1.setdata(5,8,4);
//     // e1.d=69;
//     // e1.e= 89;
//     // e1.print();

//     return 0;
// }




// // Nesting of member function
// #include <iostream>
// #include <string>
// using namespace std;
// class binary
// {
//     string s;
//     void chk();

// public:
//     void entery();
//     void compliment();
//     void print();
// };

// void binary ::entery()
// {
//     cout << "Enter a binary number " << endl;
//     cin >> s;
// }

// void binary ::chk()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary number " << endl;
//             exit(0);
//         }
//     }
// }

// void binary ::compliment()
// {
//      chk();         //----> Nesting of member function
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) =='0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) ='0';
//         }
//     }
   
// }

// void binary ::print()
// {
//      cout << "Your binary number is " << endl;
//     for (int i = 0; i < s.length(); i++)
//     {
       
//         cout << s.at(i);
//     }
//      cout<<endl;
// }


// int main()
// {
//     binary b;
//     b.entery();
//     b.print();
//     b.compliment();
//     b.print();

//     return 0;
// }