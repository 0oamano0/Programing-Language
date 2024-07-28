//! Use of Switch Statement with number
#include<iostream>
using namespace std;

int main(){

    int num=1;

    cout<<endl;
    switch(num){

        case 1: cout<<"First"<<endl;
                cout<<"first Again"<<endl;
                break;

        case 2: cout<<"Second"<<endl;
                break;
        
        default: cout<<"It is default statement"<<endl;
    }
    cout<<endl;
    return 0;

}