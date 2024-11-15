#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class result
{
    int a, b, c;
    int d,p;
    string n;
    static int e;
    void chk_result();
    

public:
    void candidate();
    void dob();
    void mobileno();

    // void subjectsname();
    void marksganied1(int, int, int);
    void marksganied2(int, int, int);
    void marksganied3(int, int, int);
    void totalmarks(result x1, result x2, result x3)
    {
        int s1 = x1.a + x2.a + x3.a;
        int s2 = x1.b + x2.b + x3.b;
        int s3 = x1.c + x2.c + x3.c;

        d = s1 + s2 + s3;
        cout << "total marks ganined out of 900 is " << d << endl;
        p= d*(100)/(900);
        cout<<"pecentage" <<endl<<p<<endl; 
        chk_result();
    }

};

int result ::e;

void result ::candidate()
{
    cout<<"the roll no of this student is "<<e+1<<endl;
    cout << "cantidate name" << endl;
    cin >> n;
    e++;
}

void result ::dob()
{
    cout << "date of birth" << endl;
    cin >> n;
}

void result ::mobileno()
{
    cout << "enter your permanent mobile number " << endl;
    cin >> setw(10) >> n;
}

void result::marksganied1(int a1, int a2, int a3)
{
    a = a1, a2, a3;
    int d1 = a1 + a2 + a3;
    cout << "Physics --> " << a1 << "  " << a2 << "  " << a3 << " =" << d1 << endl;
}
void result::marksganied2(int b1, int b2, int b3)
{
    b = b1, b2, b3;
    int d2 = b1 + b2 + b3;
    cout << "Chemistry --> " << b1 << "  " << b2 << "  " << b3 << " =" << d2 << endl;
}
void result::marksganied3(int c1, int c2, int c3)
{
    c = c1, c2, c3;
    int d3 = c1 + c2 + c3;
    cout << "Maths --> " << c1 << "  " << c2 << "  " << c3 << " =" << d3 << endl;
}

void result ::chk_result(){
    
      if(p<33){
        cout<<"failed"<<endl;
      }  
      else if((p<34) ||(p>59)){
        cout<<"third division"<<endl;
      }
      else if ((p<60) ||(p>74))
      {
        cout<<"second division"<<endl;
      }
      else if ((p<75) ||(p>90))
      {
        cout<<"first division"<<endl;
      }
      else{
        cout<<"may you are not a student of this class or you are in the merit list and tops in the district"<<endl;
      }
      
      
    
    
}

int main()
{
    // result r1,r2,r4,r5,r3;
    // r1.candidate();
    // r1.dob();
    // r1.mobileno();

    // r2.marksganied1(90,90,89);
    // r2.marksganied2(98,95,99);
    // r2.marksganied3(90,94,92);

    // r3.totalmarks(r2,r2,r2);

    result w1[5], w2, w3;
    for (int i = 0; i < 5; i++)
    {
        w1[i].candidate();
        w1[i].dob();
        w1[i].mobileno();
        cout<<"enter the marks"<<endl;
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        cout<<"enter the marks"<<endl;
        int f1,f2,f3;
        cin>>f1>>f2>>f3;
        cout<<"enter the marks"<<endl;
        int v1,v2,v3;
        cin>>v1>>v2>>v3;
        w2.marksganied1(t1,t2,t3);
        w2.marksganied2(f1,f2,f3);
        w2.marksganied3(v1,v2,v3);

        w3.totalmarks(w2, w2, w2);
    }
    

    return 0;
}