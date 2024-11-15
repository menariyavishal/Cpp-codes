// #include<iostream>
// using namespace std;
//     class employee{
//          int id;
//         int salary;
//         static int num;

//         public:
//         void setid(void){
//             cout<<"This is employee number "<<num+1<<endl;
//             cout<<"Enter the id "<<endl;
//             cin>>id;
//             num++;

//         }

//         void getid(void){
//             cout<<"the id of this employee is "<<id<<endl;

//             cout<<"every employee will get bonus on every speial ocassions "<<endl;
//              cout<<"the salary of every employee is "<<endl;
//             salary=12000;
//             cout<<salary;
//             cout<<endl;

//         }

//     };

// int employee ::num=100;
// int main(){
//     employee dino[15];
//     for (int i = 0; i < 15; i++)
//     {
//         dino[i].setid();
//         dino[i].getid();

//     }

//     return 0;
// }

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnum(int, int);
    void sumof_comp(complex o1, complex o2);

    void print()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

void complex ::setnum(int r1, int r2)
{
    a = r1;
    b = r2;
}

void complex ::sumof_comp(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
int main()
{
    complex w1, w2, w3;
    w1.setnum(5, 6);
    w1.print();

    w2.setnum(8, 2);
    w2.print();

    w3.sumof_comp(w1, w2);
    w3.print();
    return 0;
}