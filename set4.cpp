#include<iostream>
using namespace std;

int main(){
    // Selection strueture in c++--->(if, else if, else)

    // int age;
    // cout<<"Tell me your age"<<endl;
    // cin>>age;

    // if(age>=18){
    //     cout<<"you can vote"<<endl;

    // }
    // else if(age<18){
    //     cout<<"you can't vote"<<endl;

    // }
    // else{
    //     cout<<"thank you for the information";
    // }

    // int a, b;
    // char x,y;
    // cout<<"value of a :"<<endl;
    // cin>>a;
    // cout<<"value of b :"<<endl;
    // cin>>b;
    // cout<<"char x is :"<<endl;
    // cin>>x;
   

    // if(a==5, b==20){
    //     cout<<"you are a teenager"<<endl;
    //     if(x=='m'){
    //         cout<<"you are a male"<<endl;
    //     }
    //     else if(x!='m'){
    //         cout<<"you are not a male"<<endl;
    //     }
    //      cout<<"char y is :"<<endl;
    //      cin>>y;
    // }
    
    // else if(a<5, b>2){
    //     cout<<"you are a kid"<<endl;
    //     if(y=='f'){
    //         cout<<"you are a female"<<endl;
    //     }

    // }

    // else{
    //     cout<<"you are not from planet earth "<<endl;

    // }
    // cout<<"Thank you for the information";


    // Selection strueture in c++--->(switch)
        char x;
        cout<<"Information about planets"<<endl;
        cin>>x;
        switch (x)
        {
        case 'm':
            cout<<"Nearest to the sun"<<endl;
            break;
        case 'v':
            cout<<"Brightest planet of the solar system"<<endl;
            break;
            case 'e':
            cout<<"Life containing planet of the solar system and the place where from I write this code"<<endl;
            break;
            case 'M':
            cout<<"Expected new planet for life"<<endl;
            break;
            case 'j':
            cout<<"Biggest planet of the solar system 'the gas giant' "<<endl;
            break;
            case 's':
            cout<<"Rings conytaing planet"<<endl;
            break;
            case 'n':
            cout<<"second last planet of the solar system "<<endl;
            break;
            case 'u':
            cout<<"Last planet of the solar system"<<endl;
            break;
        
        default:
        cout<<"May be you are talking about some other planet or galaxy";
            break;
        }



    return 0;
}