
// CONSTRUCTORS IN C++

// #include<iostream>
// using namespace std;

//     class complex{
//         int a,b;
//         public:
//         complex(void); //this is a consturctor

//     void print(){
//         cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
//     };

// complex ::complex(void){  //---> This is a Default constructor as it takes no paramerters
//     a=0;
//     b=0;

//     cout<<"Jai shree Ram"<<endl;

// }

// int main(){
//     complex o1;
//     o1.print();
//     return 0;
// }

// PARAMETIRISED CONSTRUCTOR
#include <iostream>
#include<cmath>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void print()
    {
        // cout << "Your complex number is " << a << " + " << b << "i" << endl;
        cout<<"the point is ("<<a<<", "<<b<<")"<<endl;
    }
        friend complex distance(complex,complex);
};

complex ::complex(int x, int y)  //---->This is parametirised constructor as it takes some parameter
{
    a = x;
    b = y;
}

complex distance(complex o1, complex o2){
    int w1 = o1.a - o2.a;
    int w2 = o1.b - o2.b;
    int t1 = pow(w1,2);
    int t2 = pow(w2,2);
    
    float d = sqrt(t1+t2);
    cout<<"the distance between two points is: "<<d<<endl;
}
int main()
{
    //Implicit call
    complex p(5,8);
    p.print();

    complex q(2,4);
    q.print();

    distance(p,q);

    //Explicit call
    // complex o = complex(89,54);
    // o.print();

    return 0;
}
