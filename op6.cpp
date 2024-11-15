// #include <iostream>
// using namespace std;

// class Y;
// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }

//     friend void add(X, Y);
// };

// class Y
// {
//     int num;

// public:
//     void setvalue(int value)
//     {
//         num = value;
//     }
//     friend void add(X, Y);
// };

// void add(X o1, Y o2)
// {
//     cout << "The sum of X and Y objects is " << (o1.data + o2.num) << endl;
// }
// int main()
// {
//     X a;
//     a.setValue(8);

//     Y b;
//     b.setvalue(6);

//     add(a, b);

//     return 0;
// }

#include <iostream>
using namespace std;

class c2;
class c1
{
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }

    void print()
    {
        cout << "The value of val1 is " << val1 << endl;
    }

    friend void swap(c1 &, c2 &);
};
class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }

    void print()
    {
        cout << "The value of val2 is " << val2 << endl;
    }
    friend void swap(c1 &, c2 &);
};

void swap(c1 &o1, c2 &o2)
{
    int tmp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = tmp;
}
int main()
{
    c1 x;
    x.indata(79);

    c2 y;
    y.indata(69);

    swap(x, y);
    x.print();
    y.print();

    return 0;
}