//! use of Nesterd Switch

#include<iostream>
using namespace std;

int main(){

    char ch='a';
    int num=1;

    cout<<endl;
    switch(ch){

        case 'a': switch(num){

                    case 1: cout<<"The value of my number is : "<<num<<endl;
                    break;
                }
                break;
        case 'b': cout<<"This is char : "<<ch<<endl;
                  break;

        default : cout<<"This is default value"<<endl;
    }
    cout<<endl;
}