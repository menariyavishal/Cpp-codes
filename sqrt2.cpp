#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, r1, r2, dis;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    cout << "Enter the value of c :" << endl;
    cin >> c;

    dis = (b * b) - (4 * a * c);
    cout << "value of dis :" << dis << endl;

    if (dis > 0)
    {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        cout << "value of root1 : " << r1 << endl;
        cout << "value of root2 : " << r2 << endl;
    }
    else{
        cout<<"fadgfgh";
    }

    return 0;
}