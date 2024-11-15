#include<iostream>
using namespace std;
                    // Arryas, pointers, loops, if 
int main(){
    // int x= 5;
    // int* y=&x;
    // cout<<"the address of x is "<<&x<<endl;
    // cout<<"the address of x is "<<y<<endl;
    // cout<<"the address of x is "<<*y<<endl;


    int names[]={100, 554, 123, 632, 1200, 789, 444};
    // cout<<names[0] <<endl;
    // cout<<names[0]<<char(names[0])<<endl<<&names<<endl<<*names;

    // int x= 0;
    // while(x<7){
    //     cout<<"the value at "<<names[x] <<"the address at " <<&names<<"the char at "<<char(names[x])<<endl;
    //     x++;
    //     if(x=3){
    //         cout<<"WE are done here "<<endl;
    //         break;
    //     }
    // }

    for (int i = 0; i <7; i++)
    {
         cout<<"the value at "<<names[i] <<"the address at " <<&names<<"the char at "<<char(names[i])<<endl;
          if(i=3){
            cout<<"WE are done here "<<endl;
            break;
        }
    }
    

    // int *c = names;
    // cout<<"the value of *c is "<<*c;
    // cout<<"the value of *c is "<<*(c+1);
    // int i=0;
    // int c =0;
    // while(i<7, c<7){
    //     cout<<"the value at Array "<<c <<"is "<<names[i]<<endl;
    //     c++;
    //     i++;
    // }

    return 0;
}