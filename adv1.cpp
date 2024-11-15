#include<iostream>
#include<string>
using namespace std;


// int sum(int){
//     int a;
//     cout<<"enter value "<<endl;
//     cin>>a;
// }

struct classroom
{
    int b;
    int k;
    string n;
    void students (){
        cout<<"start servay "<<endl;
        cin>>b;
       cout<<"the student count in this class is "<<b<<endl;
    }
    void subjects(int);
    void names();
};

void classroom :: subjects(int v){
    k=v;
    cout<<"The number of subjects in this class are "<<v<<endl;
}

void classroom ::names(){
    for (int i = 1; i < b; i++)
    {
       cout<<"attendence no "<<endl<<i <<" is" <<endl;
       cin>>n;
    }
    

    
}

int main(){
    // int a,b; 
    // cout<<"enter fi)rst num "<<endl;
    // cin>>a;
    // cout<<"enter second num "<<endl;
    // cin>>b;

    // if((a<b)){
    //     cout<<"Input is valid "<<endl;
    // }
    // else{
    //     cout<<"Input is invalid "<<endl;
    // }
    //this way you can form a table
    // for (int i = 1; i <=10; i++)
    // {
    //    int s=i;
    //    s=s+i;
    //    cout<<s;
    // }

    // for (int i = 1; i <=10; i++)
    // {
    //    cout<<sum(i);
    // }
    // cout<<"the total is "<<sum(0);
    
    struct classroom h;
    h.students();
    h.subjects(6);
    h.names();
    return 0;
}