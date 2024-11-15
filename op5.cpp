// #include<iostream>
// using namespace std;
//     class complex {
//         int a,b;
//         public:
//         void setnum(int v1, int v2){
//             a = v1;
//             b = v2;
//         }

//         friend complex sumcomp(complex o1, complex o2);

//         void printnum(void){
//             cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//         }
//     };

// complex sumcomp(complex o1, complex o2){
//     complex o3;
//     o3.setnum((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }

// int main(){
//     complex w1,w2,sum;
//     w1.setnum(2,3);
//     w2.setnum(4,6);
//     w1.printnum();
//     w2.printnum();

//     sum = sumcomp(w1,w2);
//     sum.printnum();
//     return 0;
// }

// FRIEND CLASS
#include <iostream>
using namespace std;
// FORWARD DECLARATION
class complex;

class calc
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumREALcomp(complex, complex);
    int sumCOMPcplx(complex, complex);
};

class complex
{
    int a, b;

    // friend int calc ::sumREALcomp(complex o1, complex o2);
    // friend int calc ::sumCOMPcplx(complex o1, complex o2);

    //  Declaring the entire class as friend
    friend class calc;

public:
    void set(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
};

int calc ::sumREALcomp(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calc ::sumCOMPcplx(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.set(4, 5);
    c2.set(6, 3);
    c1.print();
    c2.print();

    calc w1;

    int res = w1.sumREALcomp(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    int clp = w1.sumCOMPcplx(c1, c2);
    cout << "The sum of complex part of o1 and o2 is " << clp << endl;

    return 0;
}