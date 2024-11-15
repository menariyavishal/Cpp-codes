#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i <=100; i++)
    // {
    //   cout<<"counting from 0 to 100 "<<endl;
    //   cout<<i;
    // }

    // int i=0;

    // while (i<=100)
    // {
    //      i++;
    //    cout<<i<<char(i)<<endl;
    // }

    // int x=1;
    // do{
    //     cout<<x<<endl;
    //     x++;

    // } while(x<=50);
    
    // cout<<"fill the information "<<endl;
    // int a;
    // cin>>a;

    // for(a; a<=100; a++){
    //     cout<<a<<endl;
    //     // if (a>80)
    //     // {
            
    //     //     cout<<"Game over "<<endl;
    //     //     break;
    //     // }
        
    //     if(a<=69){
    //         cout<<"time out and you didnt score well "<<endl;  
    //     }
    //     else{
    //         cout<<"you just scored a good score "<<endl;
    //     }
    // }

     cout<<"fill the information "<<endl;
    int a;
    cin>>a;

    while (a<=50)
    {
        cout<<a<<endl;
        a++;
        if (a==5)
        {
           cout<<"you are a Badmasss "<<endl;
          break;
          continue;

        }
        else if (a>=30)
        {
            cout<<"you are a good person "<<endl;
           break;
          continue;
          
        }
        else{
            cout<<"Dekh lo apne hisab se "<<endl;
        }
        
        
    }
    


    return 0;
}