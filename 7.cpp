#include <iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Tell me your age"<<endl;
    cin>>age;
    //Selection control Structure - If-Else Statement

    if(age<18){
        cout<<"Yor are not eligible for voting"<<endl;

    }else{
        cout<<"You are eligible for voting"<<endl;
    }

    //Selection control Structure - Switch Statement

    // switch (age)
    // {
    // case 18:
    //    cout<<"You are 18"<<endl;
    //     break;
    // case 19:
    //    cout<<"You are 18"<<endl;
    //     break;
    // case 8:
    //    cout<<"You are 18"<<endl;
    //     break;
    
    // default:
    // cout<<"No special cases"<<endl;
    //     break;
    // }

    return 0;
}